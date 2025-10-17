#include <string>
#include <vector>
#include <map>
#include <set>
#include <sstream>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    map<string, set<string>> reported_by;
    map<string, int> mail_count; 
    
    for (const string& id : id_list)
        mail_count[id] = 0;

    for (const string& r : report) {
        stringstream ss(r);
        string reporter, reported_user;
        ss >> reporter >> reported_user;
        
        reported_by[reported_user].insert(reporter);
    }

    for (auto const& [reported_user, reporters] : reported_by)
        if (reporters.size() >= k)
            for (const string& reporter : reporters)
                mail_count[reporter]++;
    
    vector<int> answer;
    for (const string& id : id_list)
        answer.push_back(mail_count[id]);
        
    return answer;
}
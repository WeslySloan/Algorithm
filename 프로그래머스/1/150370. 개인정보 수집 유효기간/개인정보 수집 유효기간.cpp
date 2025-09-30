#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(string today, vector<string> terms, vector<string> privacies)
{
    vector<int> answer;
    map<char, int> term_days;
    
    auto dateToDays = [](const string& date) {
        int Y = stoi(date.substr(0, 4));
        int M = stoi(date.substr(5, 2));
        int D = stoi(date.substr(8, 2));
        
        return Y * 12 * 28 + M * 28 + D;
    };
    
    for (int i = 0; i < terms.size(); ++i)
    {
        char term_type = terms[i][0];
        int months = stoi(terms[i].substr(2));
        term_days[term_type] = months * 28;
    }
    
    int today_days = dateToDays(today);
    
    for (int i = 0; i < privacies.size(); ++i)
    {
        string privacy = privacies[i];
        string date_str = privacy.substr(0, 10);
        char term_type = privacy[11];
        
        int collect_days = dateToDays(date_str);
        int valid_days = term_days[term_type];
        
        int expire_days = collect_days + valid_days;
        
        if (today_days >= expire_days)
            answer.push_back(i + 1);
    }
    
    return answer;
}
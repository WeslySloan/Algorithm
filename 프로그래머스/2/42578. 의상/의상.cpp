#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int solution(vector<vector<string>> clothes) {
    map<string, int> cloth_counts;

    for (const auto& item : clothes) {
        string type = item[1];
        cloth_counts[type]++;
    }
    long long answer = 1;

    for (const auto& pair : cloth_counts) {
        int count = pair.second;

        answer *= (count + 1);
    }

    return (int)answer - 1;
}
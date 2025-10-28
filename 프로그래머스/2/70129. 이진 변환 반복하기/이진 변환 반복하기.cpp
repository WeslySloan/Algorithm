#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer = {0, 0}; 

    while (s != "1") {
        answer[0]++;

        int ones_count = 0;
        
        for (char c : s) {
            if (c == '0') answer[1]++;
            else ones_count++;
        }
        
        string next_s = "";
        int temp_len = ones_count;
        
        if (temp_len == 0) {
            next_s = "0";
        } else {
            while (temp_len > 0) {
                next_s = (temp_len % 2 == 0 ? "0" : "1") + next_s;
                temp_len /= 2;
            }
        }
        s = next_s;
    }
    return answer;
}
#include <string>
#include <vector>
#include <functional>

using namespace std;

int solution(string word) {
    int answer = 0;
    int count = 0;
    string vowels = "AEIOU";
    bool found = false;

    function<void(string)> dfs = [&](string current) {
        if (!current.empty()) {
            count++;
            if (current == word) {
                answer = count;
                found = true;
                return;
            }
        }
        
        if (current.length() == 5) return;

        for (int i = 0; i < 5; ++i) {
            if (found) return;
            dfs(current + vowels[i]);
        }
    };

    dfs("");

    return answer;
}
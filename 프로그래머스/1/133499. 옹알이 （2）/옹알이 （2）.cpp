#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling)
{
    int answer = 0;
    vector<string> pronun = {"aya", "ye", "woo", "ma"};

    for (int i = 0; i < babbling.size(); ++i)
    {
        string s = babbling[i];
        
        if (s.find("ayaaya") != string::npos ||
            s.find("yeye") != string::npos ||
            s.find("woowoo") != string::npos ||
            s.find("mama") != string::npos)
            continue;

        for (int j = 0; j < pronun.size(); ++j)
        {
            size_t pos = s.find(pronun[j]);
            while (pos != string::npos)
            {
                s.replace(pos, pronun[j].length(), " ");
                pos = s.find(pronun[j], pos + 1);
            }
        }
        
        bool is_valid = true;
        for (int j = 0; j < s.length(); ++j)
            if (s[j] != ' ')
            {
                is_valid = false;
                break;
            }

        if (is_valid)
            answer++;
    }

    return answer;
}
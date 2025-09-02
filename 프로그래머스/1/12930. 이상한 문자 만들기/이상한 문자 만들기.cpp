#include <string>
#include <vector>

using namespace std;

string solution(string s)
{
    string answer = "";
    int index = 0;
    
    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i] == ' ')
        {
            answer += ' ';
            index = 0;
        }
        else
        {
            if (index % 2 == 0)
                if (s[i] >= 'a' && s[i] <= 'z')
                    answer += (s[i] - 32);
                else
                    answer += s[i];
            else
                if (s[i] >= 'A' && s[i] <= 'Z')
                    answer += (s[i] + 32);
                else
                    answer += s[i];
            index++;
        }
    }
    
    return answer;
}
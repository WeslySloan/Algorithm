#include <string>
#include <vector>

using namespace std;

int solution(string s)
{
    int answer = 0;
    
    char first_char = ' ';
    int x_c = 0;
    int other_c = 0;
    
    for (int i = 0; i < s.length(); ++i)
    {
        if (first_char == ' ')
        {
            first_char = s[i];
            x_c++;
            continue;
        }

        if (s[i] == first_char)
            x_c++;
        else
            other_c++;
            
        if (x_c == other_c)
        {
            answer++;
            first_char = ' ';
            x_c = 0;
            other_c = 0;
        }
    }
    
    if (x_c > 0 || other_c > 0)
        answer++;
    
    return answer;
}
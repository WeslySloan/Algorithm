#include <string>
#include <vector>

using namespace std;

string solution(string s, string skip, int index)
{
    for (int i = 0; i < s.length(); ++i)
    {
        int count = 0;
        while (count < index)
        {
            s[i]++;
            if (s[i] > 'z')
                s[i] -= 26;
            
            if (skip.find(s[i]) == string::npos)
                count++;
        }
    }
    
    return s;
}
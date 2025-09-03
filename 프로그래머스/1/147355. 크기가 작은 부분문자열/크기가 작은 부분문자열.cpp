#include <string>
#include <vector>

using namespace std;

int solution(string t, string p)
{
    int answer = 0;
    int length = p.length();
    
    for (int i = 0; i <= t.length() - length; ++i)
    {
        string sub = t.substr(i, length);
        if (stoll(sub) <= stoll(p))
            answer++;
    }
    
    return answer;
}
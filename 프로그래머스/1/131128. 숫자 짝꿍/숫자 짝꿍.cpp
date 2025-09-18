#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string X, string Y)
{
    string answer = "";
    vector<int> x_counts(10, 0);
    vector<int> y_counts(10, 0);
    
    for (char c : X)
        x_counts[c - '0']++;
        
    for (char c : Y)
        y_counts[c - '0']++;

    for (int i = 9; i >= 0; --i)
    {
        int count = min(x_counts[i], y_counts[i]);
        if (count > 0)
            for (int j = 0; j < count; ++j)
                answer += to_string(i);
    }
    
    if (answer.empty())
        return "-1";
    if (answer[0] == '0')
        return "0";
    
    return answer;
}
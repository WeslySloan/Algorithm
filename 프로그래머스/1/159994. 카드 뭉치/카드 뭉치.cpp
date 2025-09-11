#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal)
{
    string answer = "";

    int cards1_idx = 0;
    int cards2_idx = 0;

    for (const string& word : goal)
    {
        if (cards1_idx < cards1.size() && cards1[cards1_idx] == word)
        {
            cards1_idx++;
        }
        else if (cards2_idx < cards2.size() && cards2[cards2_idx] == word)
        {
            cards2_idx++;
        }
        else
        {
            answer = "No";
            return answer;
        }
    }
    
    answer = "Yes";
    return answer;
}
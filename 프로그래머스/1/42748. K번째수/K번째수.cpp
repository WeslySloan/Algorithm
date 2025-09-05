#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands)
{
    vector<int> answer;

    for (size_t i = 0; i < commands.size(); ++i)
    {
        vector<int> sli_arr(array.begin() + commands[i][0] - 1, array.begin() + commands[i][1]);
        sort(sli_arr.begin(), sli_arr.end());
        answer.push_back(sli_arr[commands[i][2] - 1]);
    }

    return answer;
}
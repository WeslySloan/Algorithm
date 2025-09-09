#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int k, vector<int> score)
{
    vector<int> answer;
    vector<int> fame;

    for (int i = 0; i < score.size(); ++i)
    {
        fame.push_back(score[i]);
        sort(fame.begin(), fame.end());

        if (fame.size() > k)
            fame.erase(fame.begin());

        answer.push_back(fame.front());
    }

    return answer;
}
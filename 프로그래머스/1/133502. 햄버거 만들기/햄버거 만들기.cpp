#include <string>
#include <vector>

using namespace std;

int solution(vector<int> ingredient)
{
    int answer = 0;
    vector<int> temp;

    for (int item : ingredient)
    {
        temp.push_back(item);
        
        if (temp.size() >= 4)
        {
            if (temp[temp.size() - 4] == 1 &&
                temp[temp.size() - 3] == 2 &&
                temp[temp.size() - 2] == 3 &&
                temp[temp.size() - 1] == 1)
            {
                answer++;
                for (int i = 0; i < 4; ++i)
                    temp.pop_back();
            }
        }
    }
    
    return answer;
}
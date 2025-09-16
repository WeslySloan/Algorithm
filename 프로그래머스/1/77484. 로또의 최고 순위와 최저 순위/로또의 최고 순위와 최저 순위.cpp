#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums)
{
    int match_count = 0;
    int zero_count = 0;

    for (int lotto_num : lottos)
        if (lotto_num == 0)
            zero_count++;
        else
            for (int win_num : win_nums)
                if (lotto_num == win_num)
                    match_count++;
    
    int max_match = match_count + zero_count;
    int min_match = match_count;
    
    vector<int> answer;
    answer.push_back(min(7 - max_match, 6));
    answer.push_back(min(7 - min_match, 6));
    
    return answer;
}
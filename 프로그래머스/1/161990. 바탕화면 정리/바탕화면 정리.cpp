#include <string>
#include <vector>
#include <algorithm>
#include <limits>

using namespace std;

vector<int> solution(vector<string> wallpaper)
{
    vector<int> answer;

    int min_r = numeric_limits<int>::max(); // 최소 행 (x1)
    int min_c = numeric_limits<int>::max(); // 최소 열 (y1)
    int max_r = numeric_limits<int>::min(); // 최대 행 (x2)
    int max_c = numeric_limits<int>::min(); // 최대 열 (y2)
    
    for (int i = 0; i < wallpaper.size(); ++i)
        for (int j = 0; j < wallpaper[i].length(); ++j)
            if (wallpaper[i][j] == '#')
            {
                min_r = min(min_r, i);
                min_c = min(min_c, j);
                max_r = max(max_r, i);
                max_c = max(max_c, j);
            }
    
    answer.push_back(min_r);
    answer.push_back(min_c);
    answer.push_back(max_r + 1);
    answer.push_back(max_c + 1);
    
    return answer;
}
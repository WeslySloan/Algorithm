#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> sizes)
{
    int answer = 0;
    int max_w = 0;
    int max_h = 0;
    
    for (int i = 0; i < sizes.size(); ++i)
    {
        int w = sizes[i][0];
        int h = sizes[i][1];
        
        if (w < h)
            swap(w, h);
        if (w > max_w)
            max_w = w;
        if (h > max_h)
            max_h = h;
    }

    answer = max_w * max_h;
    return answer;
}
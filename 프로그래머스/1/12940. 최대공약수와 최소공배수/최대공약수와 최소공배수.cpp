#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    
    int Max = 1; 
    int Min = 0; 
    
    int smaller = min(n, m);
    for (int i = smaller; i >= 1; i--) 
    {
        if (n % i == 0 && m % i == 0) 
        {
            Max = i;
            break;
        }
    }
    
    Min = (n * m) / Max;
    
    answer.push_back(Max);
    answer.push_back(Min);
    
    return answer;
}
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    long long Maxnum = 0;
    
    Maxnum = max(a, b);
    
    if ( a > b)
    {
        for (int i = b; i <= Maxnum; i++)
            answer =  answer + i;
    }
    else
    {
        for (int i = a; i <= Maxnum; i++)
            answer =  answer + i;
    }
    
    
    return answer;
}
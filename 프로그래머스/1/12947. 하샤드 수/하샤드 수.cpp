#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    int sum = 0;
    int x1 = x;
    
    while (x1 > 0) 
    {
        sum = sum + x1 % 10;
        x1 = x1 / 10;
    }
    if (x % sum == 0)
        answer = true;
    else
        answer = false;

    return answer;
}
#include <string>
#include <vector>

using namespace std;

int solution(int n) 
{
    int sum = 0;
    for (int i = 2; i <= n; i = i + 2) 
    {
        sum = sum + i;
    }
    return sum;
}
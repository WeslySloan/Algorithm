#include <string>
#include <vector>
#include <algorithm> 

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> ternary;
    
    while (n > 0) 
    {
        ternary.push_back(n % 3);
        n /= 3;
    }
    
    long long power_of_3 = 1;
    for (int i = ternary.size() - 1; i >= 0; i--) 
    {
        answer += ternary[i] * power_of_3;
        power_of_3 *= 3;
    }

    return answer;
}
#include <vector>

using namespace std;

int solution(int n) {

    const int MOD = 1234567;
    long long dp[2001]; 
    dp[1] = 1; 
    if (n >= 2) {
        dp[2] = 2;
    }
    for (int i = 3; i <= n; ++i) {
        dp[i] = (dp[i - 1] + dp[i - 2]) % MOD;
    }
    return (int)dp[n];
}
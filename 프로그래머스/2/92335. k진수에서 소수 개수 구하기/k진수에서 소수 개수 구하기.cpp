#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int solution(int n, int k) {
    int answer = 0;

    string s = "";
    int temp = n;
    while (temp > 0) {
        s += to_string(temp % k);
        temp /= k;
    }
    reverse(s.begin(), s.end());

    auto isPrime = [](long long num) {
        if (num <= 1) return false;
        if (num == 2) return true;
        for (long long i = 2; i <= sqrt(num); ++i) {
            if (num % i == 0) return false;
        }
        return true;
    };
    string token = "";
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == '0') {
            if (!token.empty()) {
                if (isPrime(stoll(token))) answer++;
                token = "";
            }
        } else {
            token += s[i];
        }
    }
    if (!token.empty()) {
        if (isPrime(stoll(token))) answer++;
    }

    return answer;
}
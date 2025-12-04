#include <vector>
#include <algorithm>
#include <cmath> 

using namespace std;

vector<int> solution(int n, long long left, long long right) {
    vector<int> answer;
    for (long long k = left; k <= right; ++k) {

        long long row = k / n;
        long long col = k % n;
        int value = max(row, col) + 1;

        answer.push_back(value);
    }
    
    return answer;
}
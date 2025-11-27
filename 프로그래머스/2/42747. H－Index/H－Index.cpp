#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int solution(vector<int> citations) {
    sort(citations.begin(), citations.end(), greater<int>());
    int N = citations.size();
    for (int i = 0; i < N; ++i) {
        int h = i + 1; 
        if (citations[i] < h) {
            return i;
        }
    }
    return N;
}
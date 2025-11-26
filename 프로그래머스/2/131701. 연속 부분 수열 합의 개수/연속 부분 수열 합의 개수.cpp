#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

int solution(vector<int> elements) {
    int N = elements.size();
    unordered_set<int> unique_sums;
    for (int i = 0; i < N; ++i) {
        int current_sum = 0;
        for (int L = 1; L <= N; ++L) {
            int next_index = (i + L - 1) % N;
            current_sum += elements[next_index];
            unique_sums.insert(current_sum);
        }
    }
    int answer = unique_sums.size();
    return answer;
}
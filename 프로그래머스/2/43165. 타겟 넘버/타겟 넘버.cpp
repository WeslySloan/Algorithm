#include <string>
#include <vector>
#include <functional>

using namespace std;

int solution(vector<int> numbers, int target) {
    int answer = 0;
    int n = numbers.size();

    function<void(int, int)> dfs = [&](int index, int current_sum) {
        if (index == n) {
            if (current_sum == target) {
                answer++;
            }
            return;
        }

        dfs(index + 1, current_sum + numbers[index]);
        dfs(index + 1, current_sum - numbers[index]);
    };
    dfs(0, 0);

    return answer;
}
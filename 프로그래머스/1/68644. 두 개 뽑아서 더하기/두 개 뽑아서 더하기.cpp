#include <string>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

vector<int> solution(vector<int> numbers)
{
    vector<int> answer;
    set<int> unique_sums;

    for (int i = 0; i < numbers.size(); ++i)
        for (int j = i + 1; j < numbers.size(); ++j)
            unique_sums.insert(numbers[i] + numbers[j]);

    for (int sum : unique_sums)
        answer.push_back(sum);

    return answer;
}
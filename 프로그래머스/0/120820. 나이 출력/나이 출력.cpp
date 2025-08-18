#include <string>
#include <vector>

using namespace std;

int solution(int age) {
    int answer = 0;
    answer = 2022 - age + 1;
    // cout << "2022년 기준 " << age << "살이므로 " << answer << "년생 입니다.";
    return answer;
}
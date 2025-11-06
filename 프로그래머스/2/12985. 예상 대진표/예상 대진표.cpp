#include <iostream>
#include <cmath> // std::ceil 사용 가능하지만, 정수 연산으로 대체

using namespace std;


int solution(int n, int a, int b) {
    int answer = 0;
    int current_a = a;
    int current_b = b;
    
    // a와 b가 만나는 라운드를 셉니다.
    while (current_a != current_b) {
        answer++;
        current_a = (current_a + 1) / 2;
        current_b = (current_b + 1) / 2;
        
    }
    
    return answer;
}
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve)
{
    vector<int> students(n + 2, 1); // 학생 번호 1부터 n까지 사용을 위해 크기 n+2로 설정
    int answer = 0;

    for (int l : lost)
        students[l]--;

    for (int r : reserve)
        students[r]++;

    for (int i = 1; i <= n; ++i)
    {
        if (students[i] == 0)
        {
            if (students[i - 1] == 2)
            {
                students[i - 1]--;
                students[i]++;
            }
            else if (students[i + 1] == 2)
            {
                students[i + 1]--;
                students[i]++;
            }
        }
    }
    
    for (int i = 1; i <= n; ++i)
        if (students[i] >= 1)
            answer++;
    
    return answer;
}
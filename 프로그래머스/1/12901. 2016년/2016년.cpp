#include <string>
#include <vector>

using namespace std;

string solution(int a, int b)
{
    string answer = "";
    string day[] = {"FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"};
    int month[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int total = 0;

    for (int i = 0; i < a - 1; i++)
        total = total + month[i];
    total += b;
    answer = day[(total - 1) % 7];
    return answer;
}
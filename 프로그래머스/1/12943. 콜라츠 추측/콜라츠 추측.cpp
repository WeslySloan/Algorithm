#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int answer = 0;
    int Collatz = num;
    
    while (true)
    {
        if ( Collatz % 2 == 0)
        {
            Collatz = Collatz / 2;
            answer++;   
        }
        else if ( Collatz == 1 )
            break;
        else if ( answer > 400 )
        {   
            answer = -1;
            break;
        }

        else
        {
            Collatz = Collatz * 3 + 1;
            answer++;
        }
    }
    
    return answer;
}
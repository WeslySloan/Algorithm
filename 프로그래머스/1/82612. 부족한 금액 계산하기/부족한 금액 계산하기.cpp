using namespace std;

long long solution(int price, int money, int count)
{
    long long cost = (long long)price * count * (count + 1) / 2;
    
    long long answer = cost - money;
    
    if ( answer <= 0 )
        return 0;

    return answer;
}
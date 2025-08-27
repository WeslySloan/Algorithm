#include <iostream>

int solution(int left, int right) {
    int answer = 0; 
    
    int number;
    for (int left2 = left; left2 <= right; left2++) 
    {
        number = 0;
        for (int i = 1; i <= left2; i++ )
            if ( left2 % i == 0 ) 
                number++;         
        
        if  ( number % 2 == 0 ) 
            answer = answer + left2;
        else 
            answer = answer - left2;
    } 
    return answer;
}
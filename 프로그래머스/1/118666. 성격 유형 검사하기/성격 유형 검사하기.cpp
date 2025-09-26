#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(vector<string> survey, vector<int> choices)
{
    string answer = "";
    map<char, int> scores;

    for (int i = 0; i < survey.size(); ++i)
    {
        char type1 = survey[i][0];
        char type2 = survey[i][1];

        if (choices[i] < 4)
            scores[type1] += 4 - choices[i];
        else if (choices[i] > 4)
            scores[type2] += choices[i] - 4;
    }
    
    if (scores['R'] >= scores['T']) 
        answer += 'R';
    else 
        answer += 'T';
    
    if (scores['C'] >= scores['F']) 
        answer += 'C';
    else 
        answer += 'F';
    
    if (scores['J'] >= scores['M']) 
        answer += 'J';
    else 
        answer += 'M';
    
    if (scores['A'] >= scores['N']) 
        answer += 'A';
    else 
        answer += 'N';
    
    return answer;
}
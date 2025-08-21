#include <string>
#include <vector>
#include <array>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "";
    
    int length = seoul.size();
    for (int i = 0; i <= length; i++)
    {
        if (seoul[i] == "Kim")
        {
            return answer = "김서방은 " + to_string(i) + "에 있다";
        }
    }
    
}
#include <vector>
#include <cmath>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    vector<int> days_needed; 
    int n = progresses.size();

    for (int i = 0; i < n; ++i) {
        int remaining_progress = 100 - progresses[i];
        int speed = speeds[i];

        int days = (remaining_progress + speed - 1) / speed;
        days_needed.push_back(days);
    }

    int max_day = 0;
    int count = 0;
    
    for (int day : days_needed) {
        if (count == 0) {
            max_day = day;
            count = 1;
        } 
        else {
            if (day <= max_day) {
                count++;
            } 
            else {
                answer.push_back(count);
                max_day = day;
                count = 1;
            }
        }
    }
    
    if (count > 0) {
        answer.push_back(count);
    }

    return answer;
}
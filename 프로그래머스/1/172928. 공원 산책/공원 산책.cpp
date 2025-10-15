#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> park, vector<string> routes) {
    int max_row = park.size();
    int max_col = park[0].size();
    
    int current_r = -1, current_c = -1;
    int r, c;

    for (r = 0; r < max_row; r++)
        for (c = 0; c < max_col; c++)
            if (park[r][c] == 'S') {
                current_r = r;
                current_c = c;
                goto found_start;
            }
    
found_start:;

    for (const string& route : routes) {
        char dir = route[0];
        int steps = route[2] - '0';
        
        int dr = 0;
        int dc = 0;
        
        if (dir == 'N') dr = -1;
        else if (dir == 'S') dr = 1;
        else if (dir == 'W') dc = -1;
        else if (dir == 'E') dc = 1;

        int next_r = current_r + dr * steps;
        int next_c = current_c + dc * steps;
        
        bool is_valid = true;
        
        if (next_r < 0 || next_r >= max_row || next_c < 0 || next_c >= max_col)
            is_valid = false;

        if (is_valid) {
            int temp_r = current_r;
            int temp_c = current_c;
            
            for (int k = 0; k < steps; k++) {
                temp_r += dr;
                temp_c += dc;
                
                if (park[temp_r][temp_c] == 'X') {
                    is_valid = false;
                    break;
                }
            }
        }

        if (is_valid) {
            current_r = next_r;
            current_c = next_c;
        }
    }

    vector<int> answer = {current_r, current_c};
    return answer;
}
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() 
{
	int M, A, B;

        while (true) {
        if (!(cin >> M >> A >> B)) break; 
        if (M == 0 && A == 0 && B == 0) break;   

        if (A == 0 || B == 0) 
            if (A == 0 && B == 0) continue;
        
        double time_diff_hours = abs((double)M / A - (double)M / B);
        long long total_seconds = (long long)round(time_diff_hours * 3600.0);

        int hours = total_seconds / 3600;
        int remaining_seconds = total_seconds % 3600;
        
        int minutes = remaining_seconds / 60;
        int seconds = remaining_seconds % 60;

        cout << hours << ":"
             << setw(2) << setfill('0') << minutes << ":"
             << setw(2) << setfill('0') << seconds << "\n";
    }

    return 0;
}
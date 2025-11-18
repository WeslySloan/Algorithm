#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int solution(int k, vector<int> tangerine) {
    map<int, int> counts;
    for (int size : tangerine) {
        counts[size]++;
    }

    vector<int> frequencies;

    for (auto const& [size, count] : counts) {
        frequencies.push_back(count);
    }

    sort(frequencies.begin(), frequencies.end(), greater<int>());
    
    int min_types = 0;

    for (int count : frequencies) {
        min_types++;
        k -= count;
        if (k <= 0) {
            break;
        }
    }
    
    return min_types;
}
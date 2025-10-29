#include <iostream>
#include <string>
#include <set>
#include <algorithm> // substr 사용을 위해 필요

using namespace std;

int main() 
{
    string S;
    cin >> S;

    set<string> substrings;
    int len = S.length();
    for (int i = 0; i < len; ++i) {
        for (int j = i; j < len; ++j) {
            string sub = S.substr(i, j - i + 1);
            substrings.insert(sub);
        }
    }
    cout << substrings.size() << "\n";
    return 0;
}

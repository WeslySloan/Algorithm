#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>

using namespace std;


bool compareWords(const string& a, const string& b) {
    if (a.length() != b.length()) {
        return a.length() < b.length();
    }
    else {
        return a < b;
    }
}

int main() {

    int N;
    if (!(cin >> N)) return 0;

    set<string> word_set;
    for (int i = 0; i < N; ++i) {
        string word;
        cin >> word;
        word_set.insert(word);
    }

    vector<string> words(word_set.begin(), word_set.end());

    sort(words.begin(), words.end(), compareWords);

    for (const string& word : words) {
        cout << word << "\n";
    }

    return 0;
}
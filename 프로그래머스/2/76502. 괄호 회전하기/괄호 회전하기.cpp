#include <string>
#include <stack>
#include <algorithm>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    int n = s.length();
    
    if (n % 2 != 0) {
        return 0;
    }

    for (int x = 0; x < n; ++x) {
        stack<char> st;
        bool is_valid = true;
        
        for (int i = 0; i < n; ++i) {
            char c = s[(x + i) % n];
            
            if (c == '(' || c == '[' || c == '{') {
                st.push(c);
            } else {
                if (st.empty()) {
                    is_valid = false;
                    break;
                }
                
                char top = st.top();

                if ((c == ')' && top == '(') || 
                    (c == ']' && top == '[') || 
                    (c == '}' && top == '{')) {
                    st.pop();
                } else {
                    is_valid = false;
                    break;
                }
            }
        }

        if (is_valid && st.empty()) {
            answer++;
        }
    }

    return answer;
}
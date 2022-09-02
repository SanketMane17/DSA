// Example 1:

// Input: s = "()"
// Output: true
// Example 2:

// Input: s = "()[]{}"
// Output: true
// Example 3:

// Input: s = "(]"
// Output: false

# include<bits/stdc++.h>
using namespace std;

bool validParenthesis(string s) {
    stack<char> stk;
    for(int i = 0;i < s.size();i++) {

        if((s[i] == ')' || s[i] == '}' || s[i] == ']') && stk.size() == 0) {
            return false;
        }

        if(s[i] == '(' || s[i] == '{' || s[i] == '[') {
            stk.push(s[i]);
        } 
        else if(
            (s[i] == ')' && stk.top() == '(') ||
            (s[i] == '}' && stk.top() == '{') ||
            (s[i] == ']' && stk.top() == '[')
            ) {
                stk.pop();
            }
        else return false;
    }

    if(stk.size() != 0)
        return false;
    return true;
}

int main(){
    cout<< validParenthesis("()") << endl;
    cout<< validParenthesis("(){}[]") << endl;
    cout<< validParenthesis("(]") << endl;
    return 0;
}
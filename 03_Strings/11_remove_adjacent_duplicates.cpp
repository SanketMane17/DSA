// Input: s = "abbaca"
// Output: "ca"
// Explanation: 
// For example, in "abbaca" we could remove "bb" since the letters are adjacent and equal, and this is the only possible move.  The result of this move is that the string is "aaca", of which only "aa" is possible, so the final string is "ca".

# include<bits/stdc++.h>
using namespace std;

string removeAdjacentDuplicates(string s) {
    
    stack<char> stack;
    stack.push(s[0]);

    for(int i = 1;i < s.length();i++) {

        if(!stack.empty()) {
            if(stack.top()==s[i])
                stack.pop();
            else
                stack.push(s[i]);   
        }
        else
            stack.push(s[i]);
    }

    string temp = "";

    while(!stack.empty()) {
        temp += stack.top();
        stack.pop();
    }
    reverse(temp.begin(), temp.end());
    return temp;
}

int main(){
    string str = "abbaca";

    cout<< removeAdjacentDuplicates(str);
    return 0;
}
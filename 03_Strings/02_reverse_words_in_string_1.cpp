// str = "hello world"
// output = "world hello"

# include<iostream>
# include<stack>
using namespace std;

string reverseString(string str) {

    // TC - O(n)
    // Sc - O(n)

    string temp = "";
    stack<string> st;

    for(int i = 0;i < str.size();i++) {
        if(str[i] != ' ') {
            temp += str[i];
        }
        else if(temp != "") {
            st.push(temp);
            temp = "";
        }
    }

    if(temp.size() > 0)
        st.push(temp);

    string res = "";
    while (!st.empty()) {
        res += st.top();

        if(st.size() >= 1)
            res += " ";
        st.pop();
    }
    
    return res;
}

int main(){
    
    string str = "hello   world";

    cout<< reverseString(str) << endl;
    return 0;
}
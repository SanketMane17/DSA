// ip = "abc"
//All possible subsequences of abc are :  
// “a” , “b” , “c” , “ab” , “bc” , “ac”, “abc”

# include<bits/stdc++.h>
using namespace std;

void solve(string str, string output, int index, vector<string> &ans) {

    // base case
    if(index >= str.length()) {
        if(output.length())
            ans.push_back(output);
        return;
    }

    // exclude
    solve(str, output, index + 1, ans);

    // include
    char element = str[index];
    output.push_back(element);
    solve(str, output, index + 1, ans);
}

vector<string> subsequences(string str) {

    vector<string> ans;
    string output = "";
    int index = 0;
    solve(str, output, index, ans);
    return ans;
}

int main(){
    
    string str = "abc";
    vector<string> ans = subsequences(str);
    for(int i = 0;i < ans.size();i++)
        cout<< ans[i] << " ";
    cout<< endl;
    return 0;
}
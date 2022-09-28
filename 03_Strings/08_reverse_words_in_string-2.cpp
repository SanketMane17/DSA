// string = my name is sanket
// o/p = yn eman si teknas

# include<bits/stdc++.h>
using namespace std;

vector<string> reverse_words(string s) {

    // TC - O(n)
    // SC - O(n)

    string temp;
    vector<string> ans;
    for(int i = 0;i < s.length();i++) {
        if(s[i] != ' ') {
            temp += s[i];
        } else {
            if(temp != "") { // For more than one space
            reverse(temp.begin(), temp.end());
            ans.push_back(temp);
            temp = "";
            }
        }
    }

    if(temp.size() > 0){
        reverse(temp.begin(), temp.end());
        ans.push_back(temp);
    }
    return ans;
}

int main(){
    
    // string s = "My name is sanket";
    string s = "  Hello   World";

    vector<string> ans = reverse_words(s);
    for(int i = 0;i < ans.size();i++) {
        cout<< ans[i] << " ";
    }
    return 0;
}
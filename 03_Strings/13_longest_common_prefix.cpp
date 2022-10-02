// flower flow flight
// Output 1
// fl

// Explanation 1
// fl is common in all three strings

# include<bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {

    string prefix = strs[0];
    for(int i = 0;i < strs.size();i++) {
        while(strs[i].find(prefix) != 0) {
            prefix = prefix.substr(0, prefix.length() - 1);

            if(prefix.empty())
                return "";
        }
    }
    return prefix;
}

int main(){
    vector<string> strs = {"flower", "flow", "flight"};

    string ans = longestCommonPrefix(strs);

    cout<< ans << endl;
    return 0;
}
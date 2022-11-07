# include<bits/stdc++.h>
using namespace std;

void reverse(string &str, int s, int e) {

    // base case
    if(s > e) 
        return;
    // processing
    swap(str[s], str[e]);
    s++, e--;
    // recursive rule

    reverse(str, s, e);
}

int main(){
    
    string str = "sanket";

    cout<< "After reversing the string " << endl;
    reverse(str, 0, str.length() - 1);
    cout<< str << endl;
    return 0;
}
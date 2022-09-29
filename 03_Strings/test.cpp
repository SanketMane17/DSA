# include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "My name is sanket";
    string part = "sanket";

    cout<< s.find(part) << endl;
    s.erase(s.find(part), part.length());
    cout<< s << endl;
    return 0;
}
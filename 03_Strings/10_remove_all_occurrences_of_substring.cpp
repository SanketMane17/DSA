// Input: s = "daabcbaabcbc", part = "abc"
// Output: "dab"
// Explanation: The following operations are done:
// - s = "daabcbaabcbc", remove "abc" starting at index 2, so s = "dabaabcbc".
// - s = "dabaabcbc", remove "abc" starting at index 4, so s = "dababc".
// - s = "dababc", remove "abc" starting at index 3, so s = "dab".
// Now s has no occurrences of "abc".

# include<bits/stdc++.h>
using namespace std;

string removeOccurrences(string s, string part) {

    // TC - O(s.length)
        
    while(s.length() != 0 && s.find(part) < s.length()) {
        s.erase(s.find(part), part.length());
    }
    return s;
}

int main(){
    string str = "daabcbaabcbc";
    string part = "abc";

    cout<< removeOccurrences(str, part) << endl;
    return 0;
}
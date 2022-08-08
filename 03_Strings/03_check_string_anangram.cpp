// s = anagram
// t = nagaram

// Sample Output 1
// true

// Sample Input 2
// rat
// car

// Sample Output 2
// false

# include<iostream>
# include<unordered_map>
using namespace std;

bool checkAnagram(string s, string t) {

    // If size not matching 
    if(s.size() != t.size())
        return false;

    unordered_map<char, int> mpp;
    for(int i = 0;i < s.size();i++) {
        mpp[s[i]]++;
    }

    // unordered_map<char,int>::iterator it;
    // for(it = mpp.begin();it != mpp.end();it++) {
    //     cout<< it->first << " " << it->second << endl;
    // }

    for(int i = 0;i < t.size();i++) {
        if(!mpp[t[i]])
            return false;
        
        mpp[t[i]]--;
    }

    return true;
}

int main(){
    // string s = "anangram";
    // string t = "nagaram";
    string s = "rat";
    string t = "car";

    if(checkAnagram(s, t))
        cout<< "True";
    else 
        cout<< "False";
    return 0;
}
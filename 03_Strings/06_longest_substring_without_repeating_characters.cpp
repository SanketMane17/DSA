// aabcccbcb
// Sample Output 1
// 3
// Explanation 1
// "abc" is the longest substring with no repeating characters.

# include<iostream>
# include<unordered_set>
# include<algorithm>
using namespace std;

int lengthOfLongestSubstring(string s) {
    int len = 0, maxLen = INT_MIN;
    int left = 0, right = 0;

    unordered_set<char> set;

    while(right < s.size()) {
        
        if(set.find(s[right]) == set.end()) {
            len = right - left + 1;
            maxLen = max(len, maxLen);

            set.insert(s[right]);
            right++;
        } else {
            set.erase(s[left]);
            left++;
        }
    }

    return maxLen;
}

int main(){
    // string s = "aabcccbcd";
    string s = "abcabcbb";
    // string s = "cbc";
    int res = lengthOfLongestSubstring(s);
    cout<< res << endl;
    return 0;
}
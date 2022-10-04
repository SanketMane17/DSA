// aabcccbcb
// Sample Output 1
// 3
// Explanation 1
// "abc" is the longest substring with no repeating characters.

# include<iostream>
# include<unordered_map>
# include<algorithm>
using namespace std;

// TC - O(n)
// SC - O(1)

int lengthOfLongestSubstring(string s) {
    int len = 0, maxLen = INT_MIN;
    int left = 0, right = 0;

    unordered_map<char, int> mpp;

    while(right < s.size()) {
        mpp[s[right]]++;
        while(mpp[s[right]] > 1) {
            mpp[s[left]]--;
            left++;
        }

        len = right - left + 1;
        maxLen = max(maxLen, len);
        right++;
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
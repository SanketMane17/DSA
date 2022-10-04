// abacd
// Output = 4
// Explanation : 
// The longest substring that has 3 distinct characters, "abac", is of length 4.

// Xyyzya
// Output = 5
// Explanation : 
// There are 2 substrings, "Xyyzy" and “yyzya” which are the longest ones having 3 distinct characters and their length is 5.

# include<iostream>
# include<unordered_map>
using namespace std;

// Variable size window problem
int lengthOfLongestSubstringKDistinct(string s, int k) {
    int left = 0, right = 0;
    unordered_map<char, int> mpp;
    int len, maxLen = -1;

    while(right < s.size()) {
        mpp[s[right]]++;

        // When size of map greater than k, remove characters from left index and make left++;
        while(mpp.size() > k) {
            mpp[s[left]]--;
            if(mpp[s[left]] == 0) 
                mpp.erase(s[left]);

            left++;
        }

        // Exactly same size as k
        // if(mpp.size() == k) {
        //     len = right - left + 1;
        //     maxLen = max(len, maxLen);
        // }

        len = right - left + 1;
        maxLen = max(len, maxLen);
        right++;
    }
    return maxLen;
}

int main(){
    // string s = "abacd";
    string s = "aaa";
    // string s = "repggxrpnrvy";
    int k = 2;

    int res = lengthOfLongestSubstringKDistinct(s, k);
    cout<< res << endl;
    return 0;
}
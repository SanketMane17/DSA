// Input: s = "cbaebabacd", p = "abc"
// Output: [0,6]
// Explanation:
// The substring with start index = 0 is "cba", which is an anagram of "abc".
// The substring with start index = 6 is "bac", which is an anagram of "abc".

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

bool checkAnagram(string s1, string s2)
{

    if (s1.size() != s2.size())
        return false;

    unordered_map<char, int> mpp;
    for (int i = 0; i < s1.size(); i++)
        mpp[s1[i]]++;

    for (int i = 0; i < s2.size(); i++)
    {
        if (!mpp[s2[i]])
            return false;

        mpp[s2[i]]--;
    }
    return true;
}

vector<int> findAnagrams(string s, string p)
{
    vector<int> ans;

    // TC - O(n)
    int len_s = s.size();
    int len_p = p.size();
    if(len_s < len_p)
        return ans;

    vector<int> p_freq(26, 0); // count of each letter
    vector<int> window(26, 0);

    // first window
    for(int i = 0;i < len_p;i++) {
        p_freq[p[i]-'a']++; // indexing of characters
        window[s[i]-'a']++;
    }

    if(window == p_freq)
        ans.push_back(0);    

    for(int i = len_p;i < len_s;i++) {
        window[s[i-len_p]-'a']--;
        window[s[i]-'a']++;

        if(p_freq == window) ans.push_back(i-len_p+1); // start index;
    }

    // TC - O(n^2) - TLE
    // int start = 1, end = p.size();
    // int n = s.size();

    // string temp = s.substr(0, p.size());
    
    // if(checkAnagram(temp, p))
    //     ans.push_back(0);

    // while (end < n)
    // {
    //     temp = temp.erase(0, 1);
    //     temp += s[end];

    //     if(checkAnagram(temp, p))
    //         ans.push_back(start);
    //     start++;
    //     end++;
    // }

    // TC - O(n^3) - runtime error(leetcode)
    // for(int i = 0;i < s.size() - p.size() + 1;i++) {
    //     string temp = "";
    //     for(int j = 0;j < p.size();j++) {
    //         temp += s[i+j];
    //     }

    //     if(checkAnagram(temp, p)) {
    //         ans.push_back(i);
    //     }
    // }
    return ans;
}

int main()
{
    string s = "cbaebabcd";
    string p = "abc";
    // string s = "abab";
    // string p = "ab";

    vector<int> ans = findAnagrams(s, p);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}
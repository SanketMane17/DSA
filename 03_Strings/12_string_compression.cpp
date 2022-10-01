// https://leetcode.com/problems/string-compression/

// Input: chars = ["a","a","b","b","c","c","c"]
// Output: Return 6, and the first 6 characters of the input array should be: ["a","2","b","2","c","3"]
// Explanation: The groups are "aa", "bb", and "ccc". This compresses to "a2b2c3".

// Input: chars = ["a"]
// Output: Return 1, and the first character of the input array should be: ["a"]
// Explanation: The only group is "a", which remains uncompressed since it's a single character.

// Input: chars = ["a","b","b","b","b","b","b","b","b","b","b","b","b"]
// Output: Return 4, and the first 4 characters of the input array should be: ["a","b","1","2"].
// Explanation: The groups are "a" and "bbbbbbbbbbbb". This compresses to "ab12".

#include <bits/stdc++.h>
using namespace std;

// TC - O(n)
// SC - O(1)

int compress(vector<char> &chars)
{
    int i = 0;
    int ansInd = 0;
    int n = chars.size();

    while (i < n)
    {
        int j = i + 1;

        while (j < n && chars[i] == chars[j]) // for same character
            j++;

        chars[ansInd++] = chars[i];
        int count = j - i; // finding count of character

        if (count > 1)
        {
            string cnt = to_string(count); // eg. "12" -> '1', '2'
            for (char ch : cnt)
                chars[ansInd++] = ch;
        }

        i = j; // for new character
    }

    return ansInd;
}

int main()
{
    // vector<char> chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    vector<char> chars = {'a', 'a', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b'};

    int index = compress(chars);

    for(int i = 0;i < index;i++) {
        cout<< chars[i] << " ";
    }
    return 0;
}
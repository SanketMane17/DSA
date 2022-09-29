// Input:
// str = output
// Output: t
// Explanation:  t and u are the characters
// with the same frequency, but t is
// lexicographically smaller.

#include <bits/stdc++.h>
using namespace std;

char getMaxOccChar(string str)
{
    // TC - O(str.length)
    // SC - O(1)

    int arr[26] = {0};

    for (int i = 0; i < str.length(); i++)
    {
        int ch = str[i];
        arr[ch - 'a']++;
    }

    int maxi = -1, ans = -1;
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] > maxi)
        {
            ans = i;
            maxi = arr[i];
        }
    }

    return ans + 'a';
}

int main()
{
    string str = "output";

    cout << getMaxOccChar(str) << endl;
    return 0;
}
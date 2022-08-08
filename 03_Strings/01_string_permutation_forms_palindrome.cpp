// nnaamm
// hello
// Aab

// Sample Output 1
// True
// False
// False

// Explanation 1
// nnaamm is a permutation of namman, which is a palindrome
// hello is not a permutation of any palindrome
// Aab is not a permutation of any palindrome

#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

bool checkPermutation(string s)
{

    // Storing frequency
    unordered_map<char, int> mpp;
    for (int i = 0; i < s.size(); i++)
    {
        mpp[s[i]]++;
    }

    int odd = 0;
    unordered_map<char, int>::iterator it;

    for(it = mpp.begin();it != mpp.end();it++) {
        if(it->second % 2 == 1)
            odd++;
    }

    if(odd > 1)
        return false;
    return true;
}

int main()
{
    // string str = "nnadsamm";
    string str = "ab";

    if(checkPermutation(str))
        cout<< "True" << endl;
    else
        cout<< "False" << endl;
    return 0;
}
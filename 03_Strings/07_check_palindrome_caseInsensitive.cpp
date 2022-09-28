// S = “N2 i&nJA?a& jnI2n” --> "YES" 
// If we ignore the special characters, whitespaces and convert all uppercase letters to lowercase, we get S = “n2injaajni2n”, which is a palindrome. Hence, the given string is also a palindrome.

# include<bits/stdc++.h>
using namespace std;

char toLowerCase(char ch) {
    if(ch >= 'a' && ch <= 'z') 
        return ch;
    char temp = ch - 'A' + 'a';
    return temp;
}

bool isAlphabet(char ch) {
    if((toLowerCase(ch) >= 'a' && toLowerCase(ch) <= 'z') || (ch >= '0' && ch <= '9'))
        return true;
    return false;
}

bool isPalindrome(string s) {

    int left = 0, right = s.size() - 1;
    while(left <= right) {

        if(!isAlphabet(s[left])) {
            left++;
        } else if(!isAlphabet(s[right])) {
            right--;
        } else {
            if(toLowerCase(s[left]) != toLowerCase(s[right]))
                return false;
            else 
                left++;right--;
        }
    }
    return true;
}

int main(){
    
    // string s = "sana@as";
    string s = "A1b22Ba";
    cout<< (isPalindrome(s) ? "YES" : "NO") << endl;
    return 0;
}
// Co-prime - Common factor is 1
// i.e gcd(a, b) = 1

# include<bits/stdc++.h>
using namespace std;

// TC - O(log(min(a, b)))
// SC - O(1)

int gcd(int a, int b) {
    
    if(a == 0)
        return b;
    if(b == 0)
        return a;
    return gcd(b, a % b);
}

bool isCoprime(int a, int b) {
    if(gcd(a, b) == 1)
        return true;
    else
        return false;
}

int main(){
    int a = 8, b = 15;
    cout<< (isCoprime(a, b) ? "true" : "false") << endl; // true;
    return 0;
}
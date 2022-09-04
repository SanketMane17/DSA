// 4 8
// 4 - 1 * 4
// 8 - 1 * 2 * 4
// a = 4, b = 8 -> 1 * 4 = 4

// Euclidean algorithm

# include<bits/stdc++.h>
using namespace std;

// TC - O(log(min(a, b)))
// SC - O(1)

int gcd(int a, int b) {
    if(a == 0) 
        return b;
    if(b == 0)
        return a;
    
    return gcd(b, a%b);
}

int main(){
    // int a = 4, b = 8;
    int a = 12, b = 546;

    int res = gcd(a, b);
    cout<< res << endl;
    return 0;
}
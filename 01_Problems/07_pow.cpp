// Example 1:

// Input: x = 2.00000, n = 10
// Output: 1024.00000
// Example 2:

// Input: x = 2.10000, n = 3
// Output: 9.26100
// Example 3:

// Input: x = 2.00000, n = -2
// Output: 0.25000
// Explanation: 2-2 = 1/22 = 1/4 = 0.25

# include<iostream>
using namespace std;

// TC - O(logn)
// SC - O(1)

double powXNLeetcode(int x, int n) {
    double ans = 1.0;
    long long nn = n;
    if(nn < 0)
        nn = -1 * nn;
    
    while(nn > 0) {
        if(nn % 2 == 1) { // odd
            ans = ans * x;
            nn = nn - 1;
        } else { // even
            x = x * x;
            nn = nn / 2;
        }
    }
    if(n < 0) 
        ans = (double) 1.0 / (double) ans;
    return ans;
}

// int pow(int a, int b) {
//     // TC - O(log b)
//     int res = 1;
//     while(b > 0) {
//         if((b&1) != 0) {
//             res *= a;
//         }
//         a *= a;
//         b = b >> 1;
//     }
//     return res;
// }


// Time complexity - O(n)
// int pow(int a, int b) {
//     int ans = 1;
//     for(int i = 1; i <= b;i++) {
//         ans *= a;
//     }
//     return ans;
// }

int main(){
    // int a = 2;
    // int b = 3;
    // cout<< pow(a, b) << endl;

    double a = 2.00000;
    double b = -2; 

    double ans = powXNLeetcode(a, b);
    cout<< ans << endl;
    return 0;
}
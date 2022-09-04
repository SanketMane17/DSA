# include<bits/stdc++.h>
using namespace std;

// TC - O(log b)
long long modularExp(long long a, long long b, int m) {

    long long res = 1;
    while(b > 0) {
        if((b & 1) != 0) // Odd 
            res = (res%m * a%m) % m;

        a = (a%m * a%m) % m;
        b = b >> 1;
    }
    return res;
}

int main(){
    int a = 12123, b = 1213;
    // int a = 2, b = 10;
    int m = 1e9; // 1000000000
    long long res = modularExp(a, b, m);
    cout<< res << endl;
    return 0;
}
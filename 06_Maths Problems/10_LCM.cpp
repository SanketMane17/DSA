// LCM(14, 8) = 56
// 14 = 1 x 2 x 7
// 8 = 1 x 2 x 4

// 1 x 2 x 4 x 7 = 56
// Algorithm
// LCM(a, b) = (a * b) / GCD(a, b)

# include<bits/stdc++.h>
using namespace std;

long long findGCD(long long a, long long b) {

    if(a == 0)
        return b;
    if(b == 0)
        return a;
    return findGCD(b, a % b);
}

long long findLCM(long long a, long b) {
    
    return (a * b) / findGCD(a, b);
}

int main(){
    
    // long long a = 14, b = 8;
    long long a = 10, b = 20;
    long long ans = findLCM(a, b);
    cout<< ans << endl;
    return 0;
}
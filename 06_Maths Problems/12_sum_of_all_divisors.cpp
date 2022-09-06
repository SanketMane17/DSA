// Input:
// N = 5
// Output:
// 21
// Explanation:
// F(1) = 1
// F(2) = 1 + 2 = 3
// F(3) = 1 + 3 = 4
// F(4) = 1 + 2 + 4 = 7
// F(5) = 1 + 5 = 6
// ans = F(1) + F(2) + F(3) + F(4) + F(5)
//     = 1 + 3 + 4 + 7 + 6
//     = 21


# include<bits/stdc++.h>
using namespace std;

long long divisorSum(int n) {
    long long sum = 0;
    for(int i = 1;i <= sqrt(n);i++) {
        if(n % i == 0) {
            if(i == n / i)
                sum += i;
            else 
                sum += (i + n / i);
        }
    }

    return sum;
}

long long sumOfAllDivisors(int n) {

    // TC - O(n)
    // SC - O(1)

    long long sum = 0;
    for(int i = 1;i <= n;i++) {
        sum += (n / i) * i;
    }
    return sum;

    // TC - O(n * logn)
    // long long ans = 0;
    // for(int i = 1;i <= n;i++) {
    //     ans += divisorSum(i);
    // }
    // return ans;
}

int main(){
    int n = 5;
    cout<< sumOfAllDivisors(n) << endl;
    return 0;
}
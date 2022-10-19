# include<bits/stdc++.h>
using namespace std;

// Without dynamic programming i.e DP
int climbStairs(int n) {
    
    // base case
    if(n < 0)
        return 0;
    if(n == 0)
        return 1;
    
    // recursive rule
    int ans = climbStairs(n - 1) + climbStairs(n - 2);
    return ans;
}

int main(){
    
    int n = 3;
    int ways = climbStairs(n);
    cout<< ways << endl;
    return 0;
}
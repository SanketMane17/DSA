// You are climbing a staircase. It takes n steps to reach the top.

// Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

// Input: n = 3
// Output: 3
// Explanation: There are three ways to climb to the top.
// 1. 1 step + 1 step + 1 step
// 2. 1 step + 2 steps
// 3. 2 steps + 1 step

# include<bits/stdc++.h>
using namespace std;

// Iterative way
int climbStairs(int n) {
    int arr[n + 1];
    arr[0] = 0;
    arr[1] = 1;
    arr[2] = 2;

    for(int i = 3;i <= n;i++) 
        arr[i] = arr[i - 1] + arr[i - 2];
    return arr[n];
}

// Using recursion (Without DP not work properly)
// int climbStairs(int n) {

//     // base case
//     if(n < 0)  // when n goes under the steps
//         return 0;
//     if(n == 0) // if n is at first step
//         return 1;

//     // recursive rule
//     return climbStairs(n - 1) + climbStairs(n - 2);
// }

int main(){
    int n = 5;

    int ways = climbStairs(n);
    cout<< ways << endl;
    return 0;
}
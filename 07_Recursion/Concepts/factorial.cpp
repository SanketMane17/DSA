#include <bits/stdc++.h>
using namespace std;

int factorial(int n) {
    // base case
    if(n == 0)
        return 1;
    
    // recursive rule
    return n * factorial(n - 1);
}

int main()
{
    int n = 6;
    int res = factorial(n);
    cout << "Factorial is = " << res << endl;
    return 0;
}
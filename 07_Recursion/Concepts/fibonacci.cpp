#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n) {
    
    // base case
    if(n == 1)
        return 0;
    if(n == 2)
        return 1;
    
    // recursive rule
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{

    int n;
    cout << "Enter n = ";
    cin >> n;

    int fib = fibonacci(n);
    cout << "fibonnaci(" << n << ") = " << fib << endl;
    return 0;
}
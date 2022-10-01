#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 3;
    int b = 4;
    cout << a << " " << b << endl;

    // 1
    a = a * b;
    b = a / b;
    a = a / b;

    // 2
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    return 0;
}
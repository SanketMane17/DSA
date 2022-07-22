#include <iostream>
using namespace std;

long modularExponentiation(long a, long b)
{
    int m = 1000000007;
    long res = 1;
    while (b > 0)
    {
        if ((b & 1) != 0)
        {
            res = (res * (a % m)) % m;
        }
        a = (a % m) * (a % m);
        b = b >> 1;
    }
    return res;
}

int main()
{
    int x, p;
    cin >> x >> p;
    long result = modularExponentiation(x, p);
    cout << result;
}
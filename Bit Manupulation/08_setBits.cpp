#include <iostream>
using namespace std;

int setBits(int a, int b)
{
    int cnt = 0;
    while (a != 0)
    {
        if (a & 1)
            cnt++;
        if (b & 1)
            cnt++;

        a >>= 1;
        b >>= 1;
    }
    return cnt;
}

int main()
{
    int a = 2;
    int b = 3;
    // a = 10
    // b = 11
    // set's = 111 = 3

    cout<< setBits(a, b);
    return 0;
}
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter n = ";
    cin >> n;
    int isPow = false;

    // Brute force approch
    for (int i = 0; i <= n; i++)
    {
        if (pow(2, i) == n)
        {
            isPow = true;
        }
    }

    // Optimized approch
    // int ans = 1;

    // for (int i = 0; i <= 30; i++)
    // {
    //     if (ans == n)
    //     {
    //         isPow = true;
    //     }

    //     if (ans < INT_MAX / 2)
    //         ans *= 2;
    // }

    if (isPow == true)
        cout << "True";
    else
        cout << "False";
    return 0;
}
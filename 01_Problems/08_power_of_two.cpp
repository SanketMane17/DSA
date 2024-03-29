#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter n = ";
    cin >> n;
    int isPow = false;

    // TC - O(n * logn)
    // Brute force approch
    // for (int i = 0; i <= n; i++)
    // {
    //     if (pow(2, i) == n)
    //     {
    //         isPow = true;
    //     }
    // }

    // Optimized approch
    // TC - O(1)
    int ans = 1;

    for (int i = 0; i <= 30; i++)
    {
        if (ans == n)
        {
            isPow = true;
            cout <<"ans" << ans << endl;
        }

        if (ans < INT_MAX / 2)
            ans *= 2;
        
        cout<< ans << endl;
    }

    if (isPow == true)
        cout << "True";
    else
        cout << "False";
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

bool linearSearch(int *arr, int n, int k)
{

    // base case
    if (n == 0)
        return false;

    if (arr[0] == k)
        return true;
    else
    {
        bool remainingPart = linearSearch(arr + 1, n - 1, k);
        return remainingPart;
    }
}

int main()
{

    int arr[] = {2, 3, 4, 5, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4;

    int res = linearSearch(arr, n, k);
    cout << (res ? "Found in array" : "Not found in array") << endl;
    return 0;
}
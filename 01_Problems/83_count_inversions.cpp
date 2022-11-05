#include <bits/stdc++.h>
using namespace std;

long long merge(long long arr[], long long temp[], long long s, long long mid, long long e)
{

    long long inv = 0;
    long long i = s;
    long long j = mid;
    long long k = s;

    while (i <= (mid - 1) && j <= e)
    {
        if (arr[i] <= arr[j])
            temp[k++] = arr[i++];
        else
        {
            temp[k++] = arr[j++];
            inv += (mid - i); // arr[i] > arr[j] 
        }
    }

    while (i <= (mid - 1))
        temp[k++] = arr[i++];
    while (j <= e)
        temp[k++] = arr[j++];

    for (int i = s; i <= e; i++)
        arr[i] = temp[i];

    return inv;
}

long long mergeSort(long long arr[], long long temp[], long long s, long long e)
{

    long long mid, inv = 0;
    if (s < e)
    {

        mid = s + (e - s) / 2;
        inv += mergeSort(arr, temp, s, mid);
        inv += mergeSort(arr, temp, mid + 1, e);

        inv += merge(arr, temp, s, mid + 1, e);
    }

    return inv;
}

long long countInversions(long long arr[], int n)
{

    // Using merge sort
    // TC - O(nlogn)
    // SC - O(n)

    long long temp[n];
    long long inv = mergeSort(arr, temp, 0, n - 1);
    return inv;

    // TLE
    // TC - O(n^2)
    // SC - O(1)
    // int cnt = 0;
    // for(int i = 0;i < n;i++) {
    //     int curr = arr[i];

    //     for(int j = i + 1;j < n;j++) {
    //         if(curr > arr[j])
    //             cnt++;
    //     }
    // }

    // return cnt;
}

int main()
{

    // long long arr[] = {0, 2, 3, 1};
    long long arr[] = {0, 2, 3, 1};

    int n = sizeof(arr) / sizeof(arr[0]);
    long long res = countInversions(arr, n);
    cout << res << endl;
    return 0;
}
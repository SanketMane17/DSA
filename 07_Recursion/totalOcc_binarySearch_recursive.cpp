#include <bits/stdc++.h>
using namespace std;

int binarySearch(int *arr, int s, int e, int k)
{

    // base case
    if (s > e)
        return -1;

    int mid = s + (e - s) / 2;

    if (k > arr[mid])
        return binarySearch(arr, mid + 1, e, k);
    else if (k < arr[mid])
        return binarySearch(arr, 0, mid - 1, k);
    else
        return mid;
}

int totalOcc(int *arr, int n, int k)
{
    int idx = binarySearch(arr, 0, n - 1, k);

    // If not found
    if (idx == -1)
        return 0;

    int count = 1;
    int left = idx - 1;
    int right = idx + 1;

    // Count element on left side
    while (left >= 0 && arr[left] == k)
        count++, left--;
    // Count element on right side
    while (right < n && arr[right] == k)
        count++, right++;

    return count;
}

int main()
{

    int arr[] = {1, 2, 3, 4, 4, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4;

    int total = totalOcc(arr, n, k);
    cout << "Total occurences = " << total << endl;
    return 0;
}
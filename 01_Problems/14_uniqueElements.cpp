// Not solved yet

#include <iostream>
#include <algorithm>
#include <unordered_set>
using namespace std;

void uniqueElements(int *arr, int n)
{
    // For sorted array

    sort(arr, arr + n);

    for(int i = 0;i < n;i++) {
        if(arr[i] == arr[i + 1]) {
            cout << arr[i] << " ";
        }
    }
}

int main()
{
    // 1,1,1,2,3,3,4,5,5
    int arr[] = {1, 3, 2, 1, 1, 3, 4, 5, 5};
    // int arr[] = {1, 10, 1, 4, 1, 2, 6, 8, 8, 5, 8, 9};
    // int arr[] = {1, 2, 2, 1, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    uniqueElements(arr, size);
    return 0;
}
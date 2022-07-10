// Not solved Yet

#include <iostream>
using namespace std;

int countOccurrences(int *arr, int n, int num)
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (num == arr[i])
        {
            cnt++;
        }
    }
    return cnt++;
}

void uniqueOccurrences(int *arr, int n)
{

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            cout << arr[i] << " = " << countOccurrences(arr, n, arr[i]) << endl;
        }
    }
}

int main()
{
    int arr[] = {1, 2, 2, 1, 1, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    uniqueOccurrences(arr, size);
    // cout<< countOccurrences(arr, size, 2);
    return 0;
}
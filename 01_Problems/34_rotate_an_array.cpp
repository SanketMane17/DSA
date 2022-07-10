#include <iostream>
# include<vector>
using namespace std;

void printArray(vector<int> arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

// Best approch : 

// void reverseArray(int *arr, int n, int s, int e)
// {
//     int start = s;
//     int end = e;
//     while (start <= end)
//     {
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }
// }

// Function to rotate an array by d elements in counter-clockwise direction.
// void rotateArr(int arr[], int d, int n)
// {
//     reverseArray(arr, n, 0, n - 1);
//     reverseArray(arr, d - 1, d + 1, n - 1);
//     reverseArray(arr, d, 0, d);
// }



// Basic approch [creating temp array]
void rotateArray(vector<int> arr, int n, int d) {
    vector<int> temp;
    
    for(int i = d; i < n;i++) {
        temp.push_back(arr[i]);
    }
    for(int i = 0;i < d;i++) {
        temp.push_back(arr[i]);
    }

    printArray(temp, temp.size());
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    // int n = sizeof(arr) / sizeof(arr[0]);
    int n = arr.size();
    int d = 2;

    rotateArray(arr, n, d);
    // rotateArr(arr, d, n);

    // reverseArray(arr, n, 0, n - 1);
    // reverseArray(arr, d - 1, d + 1, n - 1);
    // reverseArray(arr, d, 0, d);
    // printArray(arr, n);
    return 0;
}
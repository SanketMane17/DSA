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

void reverseArray(vector<int> &arr, int s, int e)
{
    int start = s;
    int end = e;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

// Function to rotate an array by d elements in counter-clockwise direction.
// TC - O(n)
// SC - O(1)

void rotateArr(vector<int> &arr, int d, int n)
{
    reverseArray(arr, 0, n - 1);
    reverseArray(arr, d + 1, n - 1);
    reverseArray(arr, 0, d);
}



// TC - O(n)
// SC - O(n)

// void rotateArray(vector<int> arr, int n, int d) {
//     vector<int> temp;
    
//     for(int i = d; i < n;i++) {
//         temp.push_back(arr[i]);
//     }
//     for(int i = 0;i < d;i++) {
//         temp.push_back(arr[i]);
//     }

//     printArray(temp, temp.size());
// }

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    // int n = sizeof(arr) / sizeof(arr[0]);
    int n = arr.size();
    int d = 2;

    // rotateArray(arr, n, d);
    rotateArr(arr, d, n);
    printArray(arr, n);
    return 0;
}
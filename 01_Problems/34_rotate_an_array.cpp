#include <bits/stdc++.h>
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

// Function to rotate an array by d elements in counter-clockwise direction.
// TC - O(n)
// SC - O(1)

void rotateArr(vector<int> &nums, int k, int n)
{
    k = k % n; // rotating array 10 times is sames as rotating array 10%n size of array
    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());
}

// TC - O(n^2)
// SC - O(1)

// void rotateArr(vector<int> &nums, int k, int n) {
//     if(n > k) {
//         reverse(nums.begin(), nums.end());
//         reverse(nums.begin(), nums.begin() + k);
//         reverse(nums.begin() + k, nums.end());
//     } else {
//         while(k) {
//             int lastElem = nums[n - 1];
//             for(int i = n - 1;i > 0;i--) {
//                 nums[i] = nums[i - 1];
//             }
//             nums[0] = lastElem;
//             k--;
//         }
//     }
// }


// TC - O(n)
// SC - O(n)

// void rotateArr(vector<int> arr, int n, int d) {
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
    // vector<int> arr = {1, 2, 3, 4, 5};
    vector<int> arr = {1, 2};
    int n = arr.size();
    int d = 3;

    // rotateArray(arr, n, d);
    rotateArr(arr, d, n);
    printArray(arr, n);
    return 0;
}
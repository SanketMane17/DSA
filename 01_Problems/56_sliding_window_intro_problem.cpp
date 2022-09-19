#include <iostream>
#include <vector>
using namespace std;

int findSum(vector<int> &arr)
{

    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
    }
    return sum;
}

int findMaxSubarraySumOfK(vector<int> &arr, int n, int k)
{

    // TC - O(n)
    // SC - O(1)

    // Approach - 1
    // int sum = 0;
    // int maxSum = INT_MIN;

    // // First window
    // for(int i = 0;i < k;i++) {
    //     sum += arr[i];
    // }

    // maxSum = max(sum, maxSum);

    // for(int i = k ;i < n;i++) {
    //     sum += arr[i] - arr[i - k];
    //     maxSum = max(sum, maxSum);
    // }
    // return maxSum;

    // Approach - 1

    // First window
    // int i;
    // for(i = 0;i < k;i++) {
    // sum += arr[i];
    // }
    // int right = i, left;

    // while(right < n) {
    //     left = right - k;

    //     sum += arr[right] - arr[left];

    //     if(sum > maxSum)
    //         maxSum = sum;
    //     right++;
    // }

    // TC - O(n * k)
    // SC - O(1)

    // int maxSum = INT_MIN;
    // for (int i = 0; i < n; i++)
    // {
    //     int sum = 0;
    //     for (int j = 0; j < k; j++)
    //     {
    //         sum += arr[i + j];
    //     }
    //     maxSum = max(sum, maxSum);
    // }
    // return maxSum;
}

int main()
{

    // vector<int> arr = {2, 6, 0, 10,1};
    // vector<int> arr = {100, 200, 300, 400};
    vector<int> arr = {807, 249, 73, 658, 930, 272, 544, 878, 923, 709, 440, 165, 492, 42, 987, 503, 327, 729, 840, 612, 303, 169, 709, 157, 560, 933, 99, 278, 816, 335, 97, 826, 512, 267, 810, 633, 979, 149, 579, 821, 967, 672, 393, 336, 485, 745, 228, 91, 194, 357, 1 ,153, 708}; // 25834 , k = 52
    int n = arr.size();
    int k = 52;

    // cout<< findSum(arr) << endl;

    int res = findMaxSubarraySumOfK(arr, n, k);
    cout << res << endl;

    return 0;
}
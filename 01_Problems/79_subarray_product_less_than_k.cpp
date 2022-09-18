// Input: nums = [10,5,2,6], k = 100
// Output: 8
// Explanation: The 8 subarrays that have product less than 100 are:
// [10], [5], [2], [6], [10, 5], [5, 2], [2, 6], [5, 2, 6]
// Note that [10, 5, 2] is not included as the product of 100 is not strictly less than k.

#include <bits/stdc++.h>
using namespace std;

int numSubarrayProductLessThanK(vector<int> &nums, int k)
{

    // TC - O(n)
    // SC - O(1)
    
    int n = nums.size();
    int cnt = 0;

    // Edge case
    if(k <= 1)
        return 0;

    int currProd = 1;
    int left = 0, right = 0;
    while (right < n)
    {
        currProd *= nums[right];

        // CASE - 2
        while (right < n && currProd >= k) {
            currProd /= nums[left]; 
            left++;
        }

        // CASE - 1
        cnt += (right - left) + 1;
        cout<< cnt << endl;
        right++;
    }
    return cnt;

    // TLE - Time Limit Exceeded
    // TC - O(n^2)
    // SC - O(1)

    // for (int i = 0; i < n; i++)
    // {
    //     long long currProd = 1;
    //     for (int j = i; j < n; j++)
    //     {
    //         if (currProd * nums[j] >= k)
    //             break;

    //         currProd *= nums[j];
    //         if (currProd < k)
    //             cnt++;
    //     }
    // }
    // return cnt;
}

int main()
{
    vector<int> nums = {10, 5, 2, 6};
    int k = 100;
    // vector<int> nums = {1, 2, 3};
    // int k = 0;

    int res = numSubarrayProductLessThanK(nums, k);
    cout << res << endl;
    return 0;
}

// Explanation
// Our Aim is to make a window having product less than k...
// Here i is the start of the window
// And j is the pointer that will helps us to find the subarray product
// After traversing some elems using j we'll encounter two cases:
// CASE 1: product < k-> means just find all the subarrays that window can give using (j-i)+1
// CASE 2: product >= k-> means just decrease the window size from start by increamenting i++, and dividing the ith element, to get rid of it...
//     And when product < k again, just follow same steps as in CASE 1...
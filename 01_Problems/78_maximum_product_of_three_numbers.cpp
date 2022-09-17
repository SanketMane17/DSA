// Input: nums = [1,2,3,4]
// Output: 24

// Input: nums = [-1,-2,-3]
// Output: -6

// Input: nums = [-1,-2,3, 4]
// Output: 8
// -1 * -2 * 4 <-- subsequences

#include <bits/stdc++.h>
using namespace std;

int maximumProduct(vector<int> &nums)
{

    // TC - O(n * logn);
    // SC - O(logn) sorting takes logn space
    int n = nums.size();
    sort(nums.begin(), nums.end());

    int p = nums[n - 3] * nums[n - 2] * nums[n - 1];
    int q = nums[0] * nums[1] * nums[n - 1];

    return max(p, q);

    // TC - O(n^3)
    // SC - O(1)

    // int maxProd = INT_MIN;
    // for (int i = 0; i < n - 2; i++)
    // {
    //     for (int j = i + 1; j < n - 1; j++)
    //     {
    //         for (int k = j + 1; k < n; k++)
    //         {
    //             maxProd = max(maxProd, nums[i] * nums[j] * nums[k]);
    //         }
    //     }
    // }
    // return maxProd;
}

int main()
{
    vector<int> nums = {-1, -2, 3, 4};
    cout << maximumProduct(nums) << endl;
    return 0;
}
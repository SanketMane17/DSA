// Problem Description
// Given an array nums, you need to find the maximum sum of triplet (nums[i] + nums[j] + nums[k]) such that 0 <= i < j < k and nums[i] < nums[j] < nums[k]. If no such triplet exists print 0.

#include <iostream>
#include <vector>
#include <algorithm>
#include<set>
using namespace std;

long long int maxSumTriplet(int n, vector<int> &nums)
{
    // TC - O(n * logn)
    // SC - O(n)

    int ans = 0;
    vector<int> right(n);

    for(int i = n - 1;i >= 0;i--) { // Suffix array
        if(i == n - 1) right[i] = nums[i];
        else right[i] = max(right[i+1], nums[i]);
    }

    set<int> s;
    s.insert(nums[0]);
    for(int i = 1;i < n;i++) {
        s.insert(nums[i]);

        auto it = s.find(nums[i]);

        if(it != s.begin() && right[i] != nums[i]) 
            ans = max(ans, (*--it) + nums[i] + right[i]);
    }
    return ans;

    // TC - O(n^2)
    // SC - O(1)

    // int ans = 0;

    // for (int i = 0; i < n - 1; i++) {
    //     int max1 = 0, max2 = 0;

    //     // 0 to i - 1 for finding value of 'a'
    //     for (int j = 0; j < i; j++)
    //         if (nums[j] < nums[i])
    //             max1 = max(max1, nums[j]);

    //     // i + 1 to n - 1 for finding value of 'c'
    //     for (int j = i + 1; j < n; j++)
    //         if (nums[j] > nums[i])
    //             max2 = max(max2, nums[j]);

    //     if (max1 && max2)
    //         ans = max(ans, max1 + nums[i] + max2);
    // }

    // return ans;

    // TC - O(n^3)
    // SC - O(1)

    // int sum = 0, maxSum = 0;
    // for(int i = 0;i < n-2;i++) {
    //     for(int j = i + 1;j < n-1;j++) {
    //         for(int k = j + 1;k < n;k++) {
    //             if(i < j && j < k) {
    //                 if(nums[i] < nums[j] && nums[j] < nums[k]) {
    //                     sum = nums[i] + nums[j] + nums[k];
    //                     maxSum = max(sum, maxSum);
    //                 }
    //             }
    //         }
    //     }
    // }
    // return maxSum;
}

int main()
{
    vector<int> nums = {3, 7, 4, 2, 5, 7, 5};
    int n = nums.size();
    long long int ans = maxSumTriplet(n, nums);
    cout << ans << endl;
    return 0;
}
// Problem Description
// Given an array nums, you need to find the maximum sum of triplet (nums[i] + nums[j] + nums[k]) such that 0 <= i < j < k and nums[i] < nums[j] < nums[k]. If no such triplet exists print 0.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long int maxSumTriplet(int n, vector<int> &nums)
{
    int ans = 0;

    for (int i = 0; i < n - 1; i++)
    {

        int max1 = 0, max2 = 0;

        // 0 to i - 1 for finding value of 'a'
        for (int j = 0; j < i; j++)
        {
            if (nums[j] < nums[i])
                max1 = max(max1, nums[j]);
        }

        // i + 1 to n - 1 for finding value of 'c'
        for (int j = i + 1; j < n; j++)
        {
            if (nums[j] > nums[i])
                max2 = max(max2, nums[j]);
        }

        if (max1 && max2)
            ans = max(ans, max1 + nums[i] + max2);
    }

    return ans;
}

int main()
{
    vector<int> nums = {3, 7, 4, 2, 5, 7, 5};
    int n = nums.size();
    long long int ans = maxSumTriplet(n, nums);
    cout << ans << endl;
    return 0;
}
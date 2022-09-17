// Input: nums = [2,3,-2,4]
// Output: 6
// Explanation: [2,3] has the largest product 6.

// Input: nums = [-2,0,-1]
// Output: 0
// Explanation: The result cannot be 2, because [-2,-1] is not a subarray.

#include <bits/stdc++.h>
using namespace std;

int maxProduct(vector<int> nums)
{

    int n = nums.size();
    int ans = nums[0];
    int ma = ans;
    int mi = ans;

    for (int i = 1; i < n; i++)
    {
        if (nums[i] < 0)
            swap(ma, mi);

        ma = max(nums[i], ma * nums[i]);
        mi = min(nums[i], mi * nums[i]);
        ans = max(ans, ma);
    }
    return ans;

    // TC - O(n^2)
    // SC - O(1)
    // Given TLE --> Not efficient

    // if(n == 1)
    //     return nums[0];
    // int maxProduct = INT_MIN;

    // for(int i = 0;i < n;i++) {
    //     int currProduct = 1;

    //     for(int j = i;j < n;j++) {
    //         currProduct *= nums[j];
    //         maxProduct = max(maxProduct, currProduct);
    //     }
    // }
    // return maxProduct;
}

int main()
{

    vector<int> nums = {2, 3, -2, 4};
    cout << maxProduct(nums) << endl;
    return 0;
}
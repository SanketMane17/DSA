// Input: nums = [2,3,1,1,4]
// Output: 2
// Explanation: The minimum number of jumps to reach the last index is 2. Jump 1 step from index 0 to 1, then 3 steps to the last index.

#include <bits/stdc++.h>
using namespace std;

int jump(vector<int> &nums)
{

    int n = nums.size();

    if (n <= 1)
        return 0;
    if (nums[0] == 0)
        return -1;
    int maxReach = nums[0];
    int steps = nums[0];
    int jumps = 1;

    for (int i = 1; i < n; i++)
    {
        if (i == n - 1)
            return jumps;
        maxReach = max(maxReach, i + nums[i]);
        steps--;
        if (steps == 0)
        {
            jumps++;
            if (i >= maxReach)
                return -1;
            steps = maxReach - i;
        }
    }
    return -1;
}

int main()
{

    vector<int> nums = {2, 3, 1, 1, 4};
    int jumps = jump(nums);
    cout << jumps << endl;
    return 0;
}
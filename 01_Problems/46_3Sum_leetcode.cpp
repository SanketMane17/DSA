// Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

// Input: nums = [-1,0,1,2,-1,-4]
// Output: [[-1,-1,2],[-1,0,1]]
// Explanation:
// nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
// nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
// nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
// The distinct triplets are [-1,0,1] and [-1,-1,2].
// Notice that the order of the output and the order of the triplets does not matter.

#include <iostream>
#include <vector>
#include <algorithm>
#include<set>
using namespace std;

void printVector(vector<int> v) {
    for(int i = 0;i < v.size();i++) {
        cout<< v[i] << " ";
    } cout<< endl;
}

vector<vector<int>> threeSum(vector<int> &nums, int s)
{
    sort(nums.begin(), nums.end());

    // Optimal approch

    vector<vector<int>> ans;

    int a, left, right, x;
    for(int i = 0;i < nums.size() - 2;i++) {

        // Checking value nums[i] is not equal to nums[i-1] for unique tripet
        if(i == 0 || (i > 0 && nums[i] != nums[i-1])) {
            a = nums[i];
            x = -a; left = i+1; right = nums.size() - 1;

            while(left < right) {
                int sum = nums[left] + nums[right];

                if(sum == x) {
                    ans.push_back({a, nums[left], nums[right]});

                    // For avoid duplication
                    while(left < right && nums[left] == nums[left+1]) left++;
                    while(left < right && nums[right] == nums[right-1]) right--;

                    left++;
                    right--;
                } else if(sum < x)
                    left++;
                else right--;
            }
        }
    }

    return ans;

    // Set will take O(log n) TC ans O(m) SC
    // TC - O(n^2*logn)
    // SC - O(m) where m is unique triplets
    
    // set<vector<int>> set;

    // int a, left, right, x;
    // for (int i = 0; i < nums.size(); i++)
    // {
    //     a = nums[i];
    //     x = s - a;
    //     left = i + 1;
    //     right = nums.size() - 1;

    //     while (left < right)
    //     {
    //         if (nums[left] + nums[right] < x)
    //             left++;
    //         else if (nums[left] + nums[right] > x)
    //             right--;
    //         else
    //         {
    //             set.insert({a, nums[left], nums[right]});
    //             left++;
    //             right--;
    //         }
    //     }
    // }

    // vector<vector<int>> ans;
    // for (auto it = set.begin();it != set.end();it++)
    //     ans.push_back(*it);

    // return ans;
}

int main()
{

    vector<int> arr = {-1, 0, 1, 2, -1, -4};
    int sum = 0;

    vector<vector<int>> ans = threeSum(arr, sum);

    for(int i = 0;i < ans.size();i++) {
        printVector(ans[i]);
    }
    return 0;
}
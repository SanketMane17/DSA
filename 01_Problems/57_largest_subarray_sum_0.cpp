// 2 3 1 -4 0 6
// Sample Output 1
// 3 1 -4 0

// Explanation
// The largest subarray with sum zero is (3, 1, -4, 0)

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> largestSubarraySumZero(int n, vector<int> arr)
{

    int sum = 0;
    unordered_map<int, int> mpp;
    int maxLen = -1, start, end, len;

    // Edge case for 0
    mpp[0] = -1;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];

        if (mpp.find(sum) != mpp.end())
        {
            // cout<< i << " " << mpp[sum] << endl;
            len = i - mpp[sum];

            if (len > maxLen)
            {
                end = i;
                start = mpp[sum];
                maxLen = len;
            }
        }
        else
        {
            mpp[sum] = i;
        }
    }

    for (auto it : mpp)
    {
        cout << it.first << " : " << it.second << endl;
    }

    // Return -1 if not found any subarray
    if (maxLen == 0)
        return {-1};

    vector<int> ans;
    for (int i = start + 1; i <= end; i++)
    {
        ans.push_back(arr[i]);
    }
    return ans;

    // Brute force
    // TC - O(n^2)
    // SC - O(n)

    // int maxLen = INT_MIN;
    // int start, end;
    // for (int i = 0; i < n; i++)
    // {
    //     int len = 0, sum = 0;
    //     for (int j = i; j < n; j++)
    //     {
    //         sum += arr[j];
    //         if (sum == 0)
    //         {
    //             len = j - i + 1;
    //             if(len > maxLen) {
    //                 start = i;
    //                 end = j;
    //                 maxLen = len;
    //             }
    //         }
    //     }
    // }

    // cout << start << " " << end<< endl;
    // vector<int> ans;
    // for(int i = start;i <= end;i++) {
    //     ans.push_back(arr[i]);
    // }
    // return ans;
}

int main()
{
    // vector<int> arr = {2, 3, 1, -4, 0, 6};
    // vector<int> arr = {0, 1, 2, 3, -1, 1};
    vector<int> arr = {-1, 1, -1, 1};
    // vector<int> arr = {1, 0, 0, 2, 3};
    // vector<int> arr = {1, 2, -3, 3};
    // vector<int> arr = {1, -1, 3, 2, -2, -8, 1, 7, 10, 23, 1, -1, -2, 2, -3, 3, -4, 2, 2, 5, -3, -2};

    // vector<int> arr = {17, -20, 3, 8, -5, -4, 12, 19, 9, -12, -11, 3, 18, -15, 15, -1, 20, 3, -19, 6, 6, -20, -10, 11, -14, -12, -9, -6, -18, -8, 17, 6, -18, -1, -4, 10, 9, 2, 14, 9, 4, 5, 15, 17, -7, -7, -2, 10, -9, 4, 14, -17, -3, -15, -20, -12, -18, -9, -4, -9, 10, 0, -5, 19, -5, 12, 0, -10, 15, -2, -3, 16, -1, 12, 13, -1, -19, 5, 16, 17, -17, -14, -20, -19, 15, -2, -4, 0, 5, 6, 18, -5, -15, 10, 6};

    int n = arr.size();
    // cout<< n << endl;

    vector<int> ans = largestSubarraySumZero(n, arr);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}
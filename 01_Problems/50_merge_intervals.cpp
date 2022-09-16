// Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
// Output: [[1,6],[8,10],[15,18]]
// Explanation: Since intervals [1,3] and [2,6] overlap, merge them into [1,6].

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool sorter(vector<int> i1, vector<int> i2)
{
    return i1[0] < i2[0];
}

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    int n = intervals.size();

    sort(intervals.begin(), intervals.end(), sorter);
    if (n == 1)
        return intervals;

    // TC - O(nlogn)
    // SC - O(1)
    int idx = 0;
    for (int i = 1; i < n; i++)
    {
        if (intervals[i][0] <= intervals[idx][1])
            intervals[idx][1] = max(intervals[idx][1], intervals[i][1]);
        else
        {
            idx++;
            intervals[idx] = intervals[i];
        }
    }
    cout << idx << endl;

    intervals.resize(idx + 1);
    return intervals;

    // TC - O(nlogn)
    // SC - O(n)

    // vector<vector<int>> ans;

    // int prev_st = intervals[0][0], prev_end = intervals[0][1];

    // for(int i = 1;i < n;i++) {
    //     int curr_st = intervals[i][0], curr_end = intervals[i][1];

    //     if(curr_st <= prev_end)
    //         prev_end = max(prev_end, curr_end);
    //     else {
    //         ans.push_back({prev_st, prev_end});
    //         prev_st = curr_st;
    //         prev_end = curr_end;
    //     }

    //     if(i == n - 1)
    //         ans.push_back({prev_st, prev_end});
    // }

    // return ans;
}

int main()
{

    vector<vector<int>> intervals = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
    // vector<vector<int>> intervals = {{2, 3}, {1, 6}, {18, 10}, {4, 18}};

    vector<vector<int>> ans = mergeIntervals(intervals);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
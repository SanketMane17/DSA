#include <bits/stdc++.h>
using namespace std;

int minDiff(int n, vector<int> arr)
{

    // TC - O(n*logn) + O(n) = O(n*logn)
    // SC - O(1)
    int minDiff = INT_MAX;
    sort(arr.begin(), arr.end());
    vector<vector<int>> ans;

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i + 1] - arr[i] < minDiff)
            minDiff = arr[i + 1] - arr[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i + 1] - arr[i] == minDiff)
            ans.push_back({arr[i], arr[i + 1]});
    }

    for(int i = 0;i < ans.size();i++) {
        for(int j = 0;j < ans[i].size();j++) {
            cout<< ans[i][j] << " ";
        } cout<< endl;
    }

    // TC - O(n^2)
    // SC - O(1)

    // for(int i = 0;i < n - 1;i++) {
    //     for(int j = i + 1;j < n;j++) {
    //         int diff = abs(arr[i] - arr[j]);
    //         minDiff = min(diff, minDiff);
    //     }
    // }
    return minDiff;
}

int main()
{
    // vector<int> arr = {1, 2, 4, 4};
    // vector<int> arr = {4,2,1,3};
    vector<int> arr = {40, 11, 26, 27, -20};
    // vector<int> arr = {3615, 9464, 1387, 7524, 5471, 8180, 3140 ,175, 824, 2511, 4559, 9695, 8749, 7817, 6107, 7672, 705, 2238, 7243}; // 119
    int n = arr.size();

    int res = minDiff(n, arr);
    cout << res << endl;
    return 0;
}
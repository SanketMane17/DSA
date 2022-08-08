// An hourglass in  is a subset of values with indices falling in this pattern in 's graphical representation:

// a b c
//   d
// e f g

// Given 6x6 matrix - total 16 hourglasess -> find max

#include <iostream>
#include <vector>
using namespace std;

int maxHourGlassSum(vector<vector<int>> &arr)
{
    int res = INT_MIN;
    int temp_sum = 0;

    for(int i = 0;i < arr.size() - 2;i++) {
        for(int j = 0;j < arr.size() - 2;j++) {
            temp_sum = arr[i][j] + arr[i][j+1] + arr[i][j+2] 
            + arr[i+1][j+1]
            + arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];

            res = max(temp_sum, res);
        }
    }
    return res;
}

int main()
{
    // vector<vector<int>> arr = {
    //     {1, 1, 1, 0, 0, 0},
    //     {0, 1, 0, 0, 0, 0},
    //     {1, 1, 1, 0, 0, 0},
    //     {0, 0, 2, 4, 4, 0},
    //     {0, 0, 0, 2, 0, 0},
    //     {0, 0, 1, 2, 4, 0}};

    vector<vector<int>> arr = {
        {-9, -9, -9,  1, 1, 1}, 
        {0, -9,  0, 4, 3, 2},
        {-9, -9, -9, 1, 2, 3},
        {0, 0, 8, 6, 6, 0},
        {0, 0, 0, -2, 0, 0},
        {0, 0, 1, 2, 4, 0}
    };
    
    int ans = maxHourGlassSum(arr);
    cout << ans << endl;
    return 0;
}
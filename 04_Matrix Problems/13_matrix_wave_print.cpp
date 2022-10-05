// The sine wave for the matrix:-
// 1 2
// 3 4
// will be [1, 3, 4, 2].
// For even index = top to bottom
// For odd index = bottom to top

# include<bits/stdc++.h>
using namespace std;

// TC - O(n*m)

vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    //Write your code here
    vector<int> ans;
    for(int i = 0;i < mCols;i++) {
        if(i % 2 == 0) {
            for(int j = 0;j < nRows;j++) {
                ans.push_back(arr[j][i]);
            }
        } else {
            for(int j = nRows - 1;j >= 0;j--) {
                ans.push_back(arr[j][i]);
            }
        }
    }

    return ans;
}

int main(){
    
    // vector<vector<int>> arr = {
    //     {1,2}, {3, 4}
    // };
    vector<vector<int>> arr = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    int n = arr.size();
    int m = arr[0].size();
    vector<int> ans = wavePrint(arr, n, m);
    for(int i = 0;i < ans.size();i++) {
        cout<< ans[i] << " ";
    }
    return 0;
}
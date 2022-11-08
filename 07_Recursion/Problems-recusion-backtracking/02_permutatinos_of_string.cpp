// Input: nums = [1,2,3]
// Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]

# include<bits/stdc++.h>
using namespace std;

void solve(vector<int> nums, int index, vector<vector<int>> &ans) {

    // base case
    if(index >= nums.size()) {
        ans.push_back(nums);
        return;
    }

    // swapping elements from ith position till last position to get all permuatitions
    for(int i = index;i < nums.size();i++) {
        swap(nums[index], nums[i]);
        solve(nums, index + 1, ans);

        // backtrack - for getting original array for next function call because we are swapping element in the original array
        swap(nums[index], nums[i]);
    }
}

vector<vector<int>> permut(vector<int> nums) {

    vector<vector<int>> ans;
    int index = 0;
    solve(nums, index, ans);
    return ans;
}

int main(){
    vector<int> nums = {1, 2, 3};

    vector<vector<int>> ans = permut(nums);
    for(int i = 0;i < ans.size();i++) {
        for(int j = 0;j < ans[i].size();j++) {
            cout<< ans[i][j] << " ";
        } cout<< endl;
    }
    return 0;
}
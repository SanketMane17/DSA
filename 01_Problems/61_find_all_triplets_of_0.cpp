# include<iostream>
# include<vector>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int> > answer;
        int k = 3;
        int sum = 0;
        
        for(int i = 0;i < k;i++) {
            sum += nums[i];
        }
        
        vector<int> temp;
        if(sum == 0) {
            for(int i = 0;i < k;i++) 
                temp.push_back(nums[i]);
            answer.push_back(temp);
        }

        for(int i = k;i < nums.size() - k + 1;i++) {
            sum += nums[i] - nums[i - k];

            if(sum == 0) {
                cout<< i << " " << i - k << endl;
            }
        }
        return answer;
    }

int main(){
    
    vector<int> arr = {-1, 0, 1, 2, -1, -4};

    vector<vector<int>> ans;
    for(int i = 0;i < ans.size();i++) {
        for(int j = 0;j < ans[i].size();j++) {
            cout<< ans[i][j] << " ";
        } cout<< endl;
    }
    return 0;
}
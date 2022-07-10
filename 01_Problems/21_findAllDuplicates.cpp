# include<iostream>
# include<vector>
# include<algorithm>

using namespace std;

vector<int> findAllDuplicates(vector<int> &nums) {

    // Better solution
    vector<int> ans;
    for(int i=0;i<nums.size();i++){
        int val=abs(nums[i]);
        
        if(nums[val-1] < 0){
            ans.push_back(val);
        }else{
            nums[val-1]=-nums[val-1];
        }
    }

    /*
    sort(nums.begin(), nums.end());

    vector<int> ans;
    for(int i = 0;i < nums.size();i++) {
        cout<< "Outer" << endl;
        if(nums[i] == nums[i+1]) {
            ans.push_back(nums[i]);
        }
    }
    */

    return ans;
}

int main(){
    vector<int> arr = {4,3,2,7,8,2,3,1};

    vector<int> ans = findAllDuplicates(arr);

    for(int i = 0;i < ans.size();i++) {
        cout<< ans[i] << " ";
    }


    return 0;
}
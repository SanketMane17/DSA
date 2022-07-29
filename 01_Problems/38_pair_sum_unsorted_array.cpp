# include<iostream>
# include<vector>
# include<unordered_map>
using namespace std;

vector<int> pairSum(vector<int> &arr, int target) {
    vector<int> ans;
    unordered_map<int, int> mpp;

    for(int i = 0;i < arr.size();i++) {

        if(mpp.find(target - arr[i]) != mpp.end()) {
            ans.push_back(mpp[target - arr[i]]);
            ans.push_back(i);
            return ans;
        }
        mpp[arr[i]] = i;
    }

    return ans;
}

int main(){
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;

    vector<int> ans = pairSum(arr, target);
    for(int i = 0;i < ans.size();i++) {
        cout<< ans[i] << " ";
    }

    // pairSum(arr, target);

    return 0;
}
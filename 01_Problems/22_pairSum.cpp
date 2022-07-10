# include<iostream>
# include<vector>
# include<algorithm>
using namespace std;

vector<vector<int>> pairSum(vector<int> &arr, int s) {
    vector<vector<int>> ans;
    for(int i = 0;i < arr.size();i++) { 
        int element = arr[i];
        for(int j = i + 1;j < arr.size();j++) {
            if(element + arr[j] == s) {
                vector<int> temp;
                temp.push_back(min(element, arr[j]));
                temp.push_back(max(element, arr[j]));
                ans.push_back(temp);
            }
        }
    }

    sort(ans.begin(), ans.end());

    return ans;
}

int main(){
    // vector<int> arr = {1, 2, 3, 4, 5};
    vector<int> arr = {2, -3, 3, 3, -2};
    int sum = 0;

    vector<vector<int>> ans = pairSum(arr, sum);
    
    for(int i = 0;i < ans.size();i++) {
        for(int j = 0;j < ans[i].size();j++) {
            cout<< ans[i][j] << " ";
        }
        cout<< endl;
    }
    return 0;
}
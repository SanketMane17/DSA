# include<iostream>
# include<vector>
# include<algorithm>
using namespace std;

bool cmp(int a, int b) {
    if(abs(a) < abs(b)) 
        return true;
    else return false;
}

vector<int> sortArrayAbsolute(int n, vector<int>& nums){

    sort(nums.begin(), nums.end(), cmp);
    return nums;
}

int main(){
    
    vector<int> arr = {2, -5, 1, -2, 4};
    int n = arr.size();

    vector<int> ans = sortArrayAbsolute(n, arr);
    for(int i = 0;i < n;i++) {
        cout<< ans[i] << " ";
    }
    return 0;
}
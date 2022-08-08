// Leetcode - Plus one

# include<iostream>
# include<vector>
# include<algorithm>
using namespace std;


vector<int> plusOne(vector<int> &arr, int n) {

    reverse(arr.begin(), arr.end());

    int carry = 1;
    for(int i = 0;i < n;i++) {
        int unit = arr[i] + carry;
        arr[i] = unit % 10;
        carry = unit / 10;
    }

    if(carry) 
        arr.push_back(carry);

    reverse(arr.begin(), arr.end());

    return arr;
}

int main(){
    
    vector<int> arr = {9, 9, 9};

    vector<int> ans = plusOne(arr, arr.size());
    for(int i = 0;i < ans.size();i++) {
        cout<< ans[i];
    }
    return 0;
}
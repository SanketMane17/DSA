# include<iostream>
# include<vector>
# include<algorithm>
using namespace std;

vector<int> tripletSum(vector<int> &arr, int s) {
    vector<int> ans;
    sort(arr.begin(), arr.end());
    
    // Two pointer approach
    // TC - O(n), SC - O(1)

    int a, left, right, x;
    for(int i = 0;i < arr.size();i++) {
        a = arr[i];
        x = s - a;
        left = i + 1;
        right = arr.size() - 1;

        while(left < right) {
            if(arr[left] + arr[right] < x)
                left++;
            else if(arr[left] + arr[right] > x)
                right--;
            else 
                return{a, arr[left], arr[right]};
        }
    }

    // TLE => Time complexity => O(n^3)

    // for(int i = 0;i < arr.size();i++) {
    //     // cout<< "Outer loop - 1" << endl;
    //     for(int j = i + 1;j < arr.size();j++) {
    //         // cout<< "Outer loop - 2" << endl;
    //         for(int k = j + 1;k < arr.size();k++) {
    //             // cout<< "Outer loop - 3" << endl;
    //             if(arr[i] + arr[j] + arr[k] == s) {
    //                 ans.push_back(arr[i]);
    //                 ans.push_back(arr[j]);
    //                 ans.push_back(arr[k]);
    //             }
    //         }
    //     }
    // }

    // sort(ans.begin(), ans.end());

    return ans;
}

int main(){
    // vector<int> arr = {1, 2, 3, 4, 5};
    // vector<int> arr = {2, -3, 3, 3, -2};
    // vector<int> arr = {10, 5, 5, 5, 2};
    vector<int> arr = {-1,0,1,2,-1,-4};
    int sum = 0;

    vector<int> ans = tripletSum(arr, sum);
    
    for(int i = 0;i < ans.size();i++) {
       cout<< ans[i] << " ";
    }
    return 0;
}
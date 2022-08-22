# include<iostream>
# include<vector>
# include<algorithm>
using namespace std;

void sortWaveFashion(vector<int> &arr, int n) {

    // Another approach [Compare the neighbourse]
    // TC - O(n)
    // SC - O(1)

    // Code for if evenIndex < oddIndex
    for(int i = 0;i < n;i += 2) { // for each even index
        if(arr[i] > arr[i - 1] && (i - 1) >= 0) {
            swap(arr[i], arr[i - 1]);
        } 
        if(arr[i] > arr[i + 1] && (i + 1) < n) {
            swap(arr[i], arr[i + 1]);
        }
    }

    // Code for if evenIndex > oddIndex
    // for(int i = 1;i < n;i += 2) {
    //     if(arr[i] > arr[i - 1]) {
    //         swap(arr[i], arr[i - 1]);
    //     }
    //     if(arr[i] > arr[i + 1] && i + 1 < n) {
    //         swap(arr[i], arr[i + 1]);
    //     }
    // }

    // TC - O(nlogn)
    // SC - O(n)
    // sort(arr.begin(), arr.end());
    // int left = (n - 1) / 2;
    // int right = n - 1;

    // vector<int> ans;
    // for(int i = 0;i < n;i++) {
    //     if(i % 2 == 0) {
    //         ans.push_back(arr[left]);
    //         left--;
    //     } else {
    //         ans.push_back(arr[right]);
    //         right--;
    //     }
    // }
    // return ans;
}

int main(){
    vector<int> arr = {1, 5, 1, 1, 6, 4};
    // vector<int> arr = {1, 6, 1, 1, 6, 4};
    // vector<int> arr = {12, 34, 65, 22, 3, 21, 89, 6};
    int n = arr.size();

    // After sorting

    sortWaveFashion(arr, n);
    for(int i = 0;i < n;i++) {
        cout<< arr[i] << " ";
    }
    cout<<endl;

    // cout<< endl << "After sorting" << endl;
    // vector<int> ans = sortWaveFashion(arr, n);
    // for(int i = 0;i < n;i++) {
    //     cout<< ans[i] << " ";
    // }

    return 0;
}
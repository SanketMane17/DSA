// Input: nums = [1,1,1], k = 2
// Output: 2
// 1 + 1 = 2 cnt++
// 1 + 1 = 2 cnt++

// Input: nums = [1,2,3], k = 3
// Output: 2
// 1 + 2 = 3 cnt++
// 3 = 3 cnt++

# include<iostream>
# include<vector>
# include<unordered_map>
using namespace std;

int findSubarrayWithSumK(vector<int> arr, int k) {

    // Optimal [Hashing] - Using unordered_map

    unordered_map<int, int> mpp;
    int cnt = 0;
    
    int currSum = 0;
    for(int i = 0;i < arr.size();i++) {
        currSum += arr[i];

        if(currSum == k)
            cnt++;

        if(mpp.find(currSum - k) != mpp.end())
            cnt += mpp[currSum - k];   

        mpp[currSum]++; 
    }

    // TC - O(n^2) (TLE)
    // for(int i = 0;i < arr.size();i++) {
    //     int sum = 0;
    //     for(int j = i;j < arr.size();j++) {
    //         sum += arr[j];
    //         if(sum == k) {
    //             cnt++;
    //         }
    //     }
    // }
    return cnt;
}

int main(){
    
    // vector<int> arr = {1, 2, 3};
    vector<int> arr = {1, 1, 1};
    int k = 2;

    int res = findSubarrayWithSumK(arr, k);
    cout<< res << endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int findMissingPositiveInteger(vector<int> &nums) {
    
    // TC - O(n)
    // SC - O(n)
    set<int> s;
    for (int i = 0; i < nums.size(); i++)
        s.insert(nums[i]);

    int temp = 1;
    while (1) { // infinite loop [1, infinity]
        if (s.find(temp) != s.end())
            temp++;
        else
            return temp;
    }


    // TC - O(nlogn)
    // SC - O(1)
    // sort(nums.begin(), nums.end());
    // int temp = 1;
    // for(int i = 0;i < nums.size();i++) {
    //     if(nums[i] > 0) {
    //         if(nums[i] != temp)
    //             return temp;
            
    //         if(nums[i] != nums[i+1])
    //             temp++;
    //     }
    // }
    // return temp;
}

int main()
{
    vector<int> nums = {3, 4, -1, 1};
    // vector<int> nums = {1, 3, 2 , 0};
    // vector<int> nums = {1, 1, 2, 2 , 0};

    int ans = findMissingPositiveInteger(nums);
    cout<< ans << endl;
    return 0;
}
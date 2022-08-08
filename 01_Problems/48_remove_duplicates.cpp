// Input: nums = [0,0,1,1,1,2,2,3,3,4]
// Output: 5, nums = [0,1,2,3,4,_,_,_,_,_]

# include<iostream>
# include<vector>
using namespace std;

int removeDuplicates(vector<int> & nums) {

    int count = 1, index = 1;

    for(int i = 1;i < nums.size();i++) {
        if(nums[i] == nums[i-1])
            count++;
        else 
            count = 1;
        
        if(count < 2)
            nums[index++] = nums[i];
    }

    return index;

    // int index = 0;
    // for(int i = 0;i < nums.size();i++) {
    //     if(nums[i] == nums[i+1])
    //         continue;
    //     else {
    //         nums[index++] = nums[i];
    //     }
    // }

    return index;
}

int main(){
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};

    int k = removeDuplicates(nums);

    for(int i = 0;i < k;i++) {
        cout<< nums[i] << " ";
    }
    return 0;
}
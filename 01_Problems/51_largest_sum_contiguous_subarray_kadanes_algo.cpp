// Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
// Output: 6
// Explanation: [4,-1,2,1] has the largest sum = 6.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long contigiousSequence(vector<long long> &arr)
{
    long long maxSum = 0, currSum = 0;

    bool flag = false;
        
    for(int i = 0;i < arr.size();i++) {
        if(arr[i] > 0)
            flag = true;
    }
    
    if(flag == false) {
        maxSum = arr[0];
        for(int i = 1;i < arr.size();i++) {
            if(arr[i] > maxSum)
                maxSum = arr[i];
        }
        
        return maxSum;
    }        

    for(int i = 0;i < arr.size();i++) {
        currSum += arr[i];

        if(currSum > maxSum)
            maxSum = currSum;

        if(currSum < 0)
            currSum = 0;
    }

    return maxSum;
}

int main()
{

    vector<long long> arr = {-2, -3, 4, -1, -2, 1, 5, -3};
    // vector<long long> arr = {-1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000};
    // vector<long long> arr = {-10, -10, -10, -10};

    long long maxSum = contigiousSequence(arr);
    cout << maxSum << endl;
    return 0;
}
// arr = {1,7,3,6,5,6}

// sum(left part) = sum(right part)
// sum(i - 1) == sum(i + 1)
// return i;

//   1 + 7 + 3  = 11 = 5 + 6

// index of 6 = 3 -> Pivot index 

# include<iostream>
# include<vector>
using namespace std;

int pivotIndex(vector<int> &arr, int n) {
    int leftSum = 0;
    int rightSum = 0;

    // Add all elements into right sum
    for(int i = 0;i < n;i++) {
        rightSum += arr[i];
    }

    for(int i = 0;i < n;i++){
        // substract current element from right sum
        rightSum -= arr[i];

        // check if left sum and right sum is equal
        if(rightSum == leftSum)
            return i;

        //add current element into left sum
        leftSum += arr[i];
    }

    return -1;
}

int main(){
    vector<int> arr = {1,7,3,6,5,6};
    // vector<int> arr = {5,6,1,7,3,6}; 
    // vector<int> arr = {2,1,-1};
    // vector<int> arr = {1,2,3};
    int n = arr.size();

    int res = pivotIndex(arr, n);
    cout<< "Pivot index = " << res << endl;
    return 0;
}
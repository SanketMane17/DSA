# include<iostream>
# include<vector>
using namespace std;

int peakIndex(vector<int> &arr, int n) {
   

   // Optimized code -- O(logn) (Binary search)
   int s = 0, e = n - 1;
   int mid = s + (e - s) / 2;

    // Don't use <= b'coz it repeatadly compare
    while(s < e) { 
        if(arr[mid] > arr[mid+1])
            return mid;
        if(arr[mid] < arr[mid+1]) 
            s = mid + 1; // s is the index we have to return
        else 
            e = mid;
        
        mid = s + (e - s) / 2;
    }  

    return s;
   
    // Brute force --> O(n)
    // int index = -1;
    // int max = arr[0];
    // for(int i = 1;i < n;i++) {
    //     if(max < arr[i]) {
    //         max = arr[i];
    //         index = i;
    //     }
    // }
    // return index;
}

int main(){
    vector<int> arr = {0, 10, 5, 2};
    // vector<int> arr = {3, 4, 5, 1};
    int n = arr.size();

    int res = peakIndex(arr, n);
    cout<< "Peak index = " << res << endl;
    return 0;
}
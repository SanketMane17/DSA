# include<iostream>
# include<vector>
using namespace std;

int firstOcc(vector<int> &arr, int n, int k) {
    int start = 0, end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while(start <= end) {
        if(k == arr[mid]) {
            ans = mid;
            end = mid - 1;
        }
        else if(k > arr[mid])
            start = mid + 1;
        else 
            end = mid - 1;
        
        mid = start + (end - start) / 2;
    }
    return ans;
}

int lastOcc(vector<int> &arr, int n, int k) {
    int start = 0, end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while(start <= end) {
        if(k == arr[mid]) {
            ans = mid;
            start = mid + 1;
        }
        else if(k > arr[mid])
            start = mid + 1;
        else 
            end = mid - 1;
        
        mid = start + (end - start) / 2;
    }
    return ans;
}

int totalOcc(vector<int> &arr, int n, int k) {

    int first = firstOcc(arr, n, k);
    int last = lastOcc(arr, n, k);

    return (last - first) + 1;
}

int main(){
    vector<int> arr = {1, 2, 3, 3, 3, 5};

    cout<< "Total occurrence of 3 = " << totalOcc(arr, 6, 3) << endl;
    return 0;
}
// arr = {3, 8, 10, 17, 1} // Rotated array
// Graph representation
// first line  = 3 8 10 17
// second line = 1
// so, pivot lies on second line i.e minimum element in rotated array = 1

// o/p => 4 [index of 1]

# include<iostream>
using namespace std;

int findPivot(int arr[], int n) {
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;

    while(start < end) {
        if(arr[mid] >= arr[0]) {
            // if true, pivot lies on second line
            start = mid + 1;
        }
        else 
            end = mid;
        
        mid = start + (end - start) / 2;
    }

    return start;
}

int main(){
    int arr[] = {3, 8, 10, 17, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int res = findPivot(arr, n);

    cout<< "Pivot in array = " << res << endl;
    return 0;
}
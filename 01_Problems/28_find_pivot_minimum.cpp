// arr = {3, 8, 10, 17, 1} // Rotated array
// Graph representation
// first line  = 3 8 10 17
// second line = 1
// so, pivot lies on second line i.e minimum element in rotated array = 1

// o/p => 4 [index of 1]

# include<iostream>
using namespace std;

int getPivot(int arr[], int n) {

    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    // When all elements are in ascending order
    if(arr[s] < arr[e]){ 
        return arr[s];
    }

    while(s<e) {

        if(arr[mid] >= arr[0])
        {
            s = mid+1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return arr[s];
}

int main() {
    // int arr[] = {1, 3, 8, 10, 17, 0};
    // int arr[] = {3,4,5,1,2};
    int arr[] = {11,13,15,17};
    cout << "Pivot is " << getPivot(arr, 4) << endl;
}
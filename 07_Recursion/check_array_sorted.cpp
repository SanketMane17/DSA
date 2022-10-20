# include<bits/stdc++.h>
using namespace std;

bool isSorted(int *arr, int size) {

    // base case
    if(size == 0 || size == 1)
        return true;

    // recursive rule
    if(arr[0] > arr[1])
        return false;
    else {
        bool remainingPart = isSorted(arr + 1, size - 1);
        return remainingPart;
    }
}

int main(){
    
    int arr[] = {2, 3, 5, 6};
    int size = sizeof(arr)/sizeof(arr[0]);

    if(isSorted(arr, size))
        cout<< "Array is soted" << endl;
    else 
        cout<< "Array is not sorted" << endl;
    return 0;
}
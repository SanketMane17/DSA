# include<bits/stdc++.h>
using namespace std;

void sortArray(int *arr, int n) {

    // base case - if already sorted
    if(n == 0 || n == 1)
        return;
    
    // push largest element at the end of the array
    for(int i = 0;i < n - 1;i++) 
        if(arr[i] > arr[i + 1])
            swap(arr[i], arr[i + 1]);
    
    // recursive call
    sortArray(arr, n - 1);
}

int main(){
    
    int arr[] = {2, 5, 1, 2, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    sortArray(arr, n);

    for(int i = 0;i < n;i++) 
        cout<< arr[i] << " ";
    cout<< endl;
    return 0;
}
# include<bits/stdc++.h>
using namespace std;

void print(int *arr, int s, int e) {
    for(int i = s;i <= e;i++) 
        cout<< arr[i] << " ";
    cout<< endl;
}

int binarySearch(int *arr, int s, int e, int k) {
    print(arr, s, e);

    // base case
    if(s > e) 
        return -1;
    
    int mid = s + (e - s) / 2;
    if(arr[mid] == k)
        return mid;
    else if(arr[mid] < k) 
        return binarySearch(arr, mid + 1, e, k);
    else   
        return binarySearch(arr, 0, mid - 1, k);
}

int main(){
    
    int arr[] = {2, 4, 6, 10, 14 ,18};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 18;

    int index = binarySearch(arr, 0, n - 1, k);
    cout<< "Found at " << index << endl;
    return 0;
}
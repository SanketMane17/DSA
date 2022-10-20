# include<bits/stdc++.h>
using namespace std;

// I've to find recursive way

int getPivot(int *arr, int n) {

    int s = 0, e = n - 1;
    while(s < e) {
        int mid = s + (e - s) / 2;

        if(arr[mid] > arr[mid + 1])
            return mid + 1;
        else if(arr[0] >= arr[mid])
            e = mid;
        else   
            s = mid + 1;
    }

    return s;
}

int main(){
    
    int arr[] = {4, 5, 6, 7, 8,1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    int pivot = getPivot(arr, n);
    cout<< pivot << endl;
    return 0;
}
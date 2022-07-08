# include<iostream>
using namespace std;

int findMax(int arr[], int size) {
    int max = arr[0];
    for(int i = 1;i < size;i++) {
        if(max < arr[i]) 
            max = arr[i];
    }
    
    return max;
}

int findMin(int arr[], int size) {
    // int min = arr[0];
    // for(int i = 1;i < size;i++) {
    //     if(min > arr[i]) 
    //         min = arr[i];
    // }
    
    int mini = INT_MAX;
     for(int i = 0;i < size;i++) {
        mini = min(mini, arr[i]);
    }

    return mini;
}

int main(){
    int arr[]  = {4, 1, 5, 2, 23, 45};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    cout<< "Max from array = " << findMax(arr, size) << endl;
    cout<< "Min from array = " << findMin(arr, size) << endl;

    return 0;
}
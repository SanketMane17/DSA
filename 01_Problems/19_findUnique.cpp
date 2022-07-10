# include<iostream>
using namespace std;

int findUnique(int *arr, int n) {
    int ans = 0;
    
    for(int i = 0;i < n;i++) {
        ans = ans ^ arr[i];    
    }
    return ans;
}

int main(){
    int arr[] = {7,2, 4, 7, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    cout<< "Unique element in an array = " << findUnique(arr, size);

    // findUnique(arr, size);
    return 0;
}
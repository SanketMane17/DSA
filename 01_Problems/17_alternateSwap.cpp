# include<iostream>
using namespace std;

void alternateSwap(int *arr, int size) {

    // TC - O(n)
    // SC - O(1)
    
    int pos1 = 0; 
    int pos2 = 1;
    
    while(pos2 <= size) {
        swap(arr[pos1], arr[pos2]);
        pos1 += 2;
        pos2 += 2;
    }
}

void printArray(int *arr, int n) {
    for(int i = 0;i < n;i++) {
        cout<< arr[i] << " ";
    }
}

int main(){
    int arr[] = {2, 1, 8, 7, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    printArray(arr, size);
    cout<< endl;
    alternateSwap(arr, size);
    printArray(arr, size);
    return 0;
}
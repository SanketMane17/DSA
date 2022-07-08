# include<iostream>
using namespace std;

void printArray(int *arr, int n) {
    for(int i = 0;i < n;i++) {
        cout<< arr[i] << " ";
    }
}

void arrayReverse(int *arr, int n) {
    int start = 0;
    int end = n-1;

    while(start <= end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    cout<< endl;
}

int main(){
    int arr[] = {1,2,3,4,8,5};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout<< "Before reversing array" << endl;
    printArray(arr, size);
    arrayReverse(arr, size);
    cout<< "After reversing array" << endl;
    printArray(arr, size);
    return 0;
}
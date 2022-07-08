# include<iostream>
using namespace std;

int arraySum(int *arr, int size) {
    int sum = 0; 
    for(int i = 0;i < size;i++) {
        sum += arr[i];
    }

    return sum;
}

int main(){
    int arr[] = {1,2,3,5};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout<< "Array sum = " << arraySum(arr, size) << endl;    
}
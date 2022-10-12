# include<iostream>
using namespace std;

int sumOfArray(int* a, int n){ 
    // Here int a[] & int* a are same and size of the arr is depends on pointers size not on the array size

    int temp = 0;
    for(int i = 0;i < n;i++){
        temp += *(a+i); // Here a[i] & *(a+i) are same
    }
    return temp;
}

void Double(int* a, int n){
    for(int i = 0; i < n; i++)
    {
        *(a+i) = 2 * (*(a+i)); // a[i] = 2 * a[i]; => both are same
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = sumOfArray(&arr[0], n); // Here &arr[0] & arr are same 
    cout<< "Sum = " << sum << endl;

    Double(arr, n);
    for(int i = 0;i < n;i++){
        cout<< arr[i] << " ";
    }
    return 0;
}
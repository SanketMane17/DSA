# include<iostream>
using namespace std;

int main(){
    int arr[] = {10, 20, 30, 40};
    // cout<< *arr << endl; // Print first elememt in the array

    // int *ptr = arr; // Pointer is point to the first element in the array
    for(int i = 0;i < 4;i++){
        // cout<< *ptr << endl;
        // cout<< *(arr+i) << endl;
        cout<< "Address = " << &arr[i] << endl;
        cout<< "Address = " << (arr+i) << endl;
        cout<< "Value = " << arr[i] << endl;
        cout<< "Value = " << *(arr+i) << endl;
        // arr++; // illegal
        // ptr++; // legal
    }
    return 0;
}
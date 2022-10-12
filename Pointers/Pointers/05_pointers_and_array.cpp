# include<iostream>
using namespace std;

int main(){
    int arr[] = {10, 20, 30, 40};
    // cout<< *arr << endl; // Print first elememt in the array

    // int *ptr = arr; // Pointer is pointing to the first element in the array
    for(int i = 0;i < 4;i++){
        // cout<< *ptr << endl;
        // cout<< *(arr+i) << endl;
        cout<< "Address = " << &arr[i] << endl; // address at i
        cout<< "Address = " << (arr+i) << endl; // address at i
        cout<< "Value = " << arr[i] << endl; // value
        cout<< "Value = " << *(arr+i) << endl; // value at i
        // arr++; // illegal
        // ptr++; // legal
    }
    return 0;
}
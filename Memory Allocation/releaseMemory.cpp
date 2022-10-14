# include<bits/stdc++.h>
using namespace std;

int main(){
    
    // In case of static memory allocation we don't need to delete the memeory, but in case of dynamic memory allocatio we must release the memory manually otherwise out program will crash at some point

    // For single integer 
    int *ptr = new int;
    delete ptr;

    // For 1D array
    int *arr = new int[5];
    delete[] arr;

    // For 2D array
    // for(int i = 0;i < row;i++) {
    //     delete [] arr[i];
    // }
    // delete [] arr;
    return 0;
}
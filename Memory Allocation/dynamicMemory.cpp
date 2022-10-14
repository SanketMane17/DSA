# include<bits/stdc++.h>
using namespace std;

int getSum(int *arr, int n) {

    int sum = 0;
    for(int i = 0;i < n;i++) {
        sum += arr[i];
    }
    return sum;
}

int main(){
    
    // char ch = 'q'; // 1 byte 
    // cout<< sizeof(ch) << endl;
    // char *c = &ch; // 4 bytes in 32 bit system and 8 bytes in 64 bit system
    // cout<< sizeof(c) << endl;

    // Dynamic array

    // int *arr = new int[5];
    // So, here new int[5] will return address and *arr is taking the retured address.
    // Sizeof new int[5] = 5 * 4 = 20 bytes;
    // Sizeof *arr = 4 bytes

    // Creating variable sized array;
    int n;
    cin >> n;

    int *arr = new int[n];
    for(int i = 0;i < n;i++) {
        cin>> arr[i];
    }

    int sum = getSum(arr, n);
    cout<< "Sum = " << sum << endl;
    return 0;
}


// Diff between static and dynamic memory allocation
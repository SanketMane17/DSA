# include<iostream>
using namespace std;

int main(){
    // For integers
    int a = 10;
    int *aptr = &a; // Suppose address is 2000
    cout << aptr << endl;
    cout << aptr+1 << endl;

    cout<< "Size of integer is " << sizeof(int) << " bytes" << endl;

    aptr++; // Now after incrementing, the address is 2004 b'coz int has 4 bytes memory 
    cout<< aptr << endl;

    float f = 1.05;
    float *fptr = &f;
    cout<< fptr << endl;

    fptr++;
    cout << fptr;
    return 0;
}
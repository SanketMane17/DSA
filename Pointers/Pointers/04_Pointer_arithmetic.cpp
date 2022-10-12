# include<iostream>
using namespace std;

int main(){
    // For integers
    int a = 10;
    int *aptr = &a; // Suppose address is 2000

    // cout<< "Size of integer is " << sizeof(int) << " bytes" << endl;

    cout<< aptr << endl;
    aptr = aptr + 1; // Now after incrementing, the address is 2004 b'coz int has 4 bytes memory 
    cout<< aptr << endl;

    // Size of float = 4 bytes

    float f = 1.05;
    float *fptr = &f;
    cout<< fptr << endl;

    // fptr++;
    fptr = fptr + 1;
    cout << fptr;
    return 0;
}
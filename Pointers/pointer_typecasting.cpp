# include<iostream>
using namespace std;

int main(){
    int a = 1025;
    int *p = &a;
    cout<< "Size of integer is " << sizeof(int) << " bytes" << endl;
    cout<< "Address = " << p << ", Value = " << *p << endl;
    cout<< "Address = " << p+1 << ", Value = " << *(p+1) << endl;

    char *p0 = (char*)p; // Typecasting
    cout<< "Size of character is " << sizeof(char) << " bytes" << endl; 
    cout<< "Address = " << p0 << ", Value = " << *p0 << endl;
    cout<< "Address = " << p0+1 << ", Value = " << *(p0+1) << endl;

    // void pointer = Generic pointer
    void* p2;
    p2 = p;
    cout<< "Address = " << p2;
    return 0;
}
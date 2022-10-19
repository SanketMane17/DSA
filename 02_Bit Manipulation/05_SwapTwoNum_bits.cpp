# include<iostream>
using namespace std;

int main(){
    int a, b;
    cout<< "Enter a and b = ";
    cin>> a >> b;

    // a = a ^ b;
    // b = a ^ b;
    // a = a ^ b;

    a = a + b;
    b = a - b;
    a = a - b;

    cout<< "After swapping " << endl;
    cout<< "a = " << a << endl << "b = " << b << endl;
    return 0;
}
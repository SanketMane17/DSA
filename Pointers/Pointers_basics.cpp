# include<iostream>
using namespace std;
int main(){
    int a;
    int *aptr = &a;
    // a = 10;
    cout<< "The value of a is " << aptr << endl;

    // Change the value of a using pointer 
    // *aptr = 20;
    // cout<< "Now the value of a is " << a << endl;
    // cout<< "Now the value of a is " << *aptr << endl;
    return 0;
}
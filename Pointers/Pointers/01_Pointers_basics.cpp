# include<iostream>
using namespace std;
int main(){
    int a = 5;
    int *aptr = &a;
    // a = 10;
    // cout<< "The value of a is " << aptr << endl;

    (*aptr)++;
    // cout<< "a = " << a << endl;
    // cout<< "*aptr = " << *aptr << endl;

    // Change the value of a using pointer 
    // *aptr = 20;
    // cout<< "Now the value of a is " << a << endl;
    // cout<< "Now the value of a is " << *aptr << endl;


    return 0;
}
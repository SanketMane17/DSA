# include<iostream>
using namespace std;

void printHelloworld(){
    cout<< "Hello World!!" << endl;
}
int* Add(int* a, int* b){
    // cout<< "Address of a in Add is " << &a << endl;
    // cout<< "Value in a of Add (address of a in main) is " << a << endl;
    // cout<< "Value at a in main is " << *a << endl;
    // int* c = new int;
    int *c = (int *)malloc(sizeof(int));
    *c = (*a) + (*b);
    return c;
}
int main(){
    int a = 4, b = 5;
    // cout<< "Address of a in main is " << &a << endl;
    int *ptr = Add(&a, &b);
    printHelloworld();
    cout<< "Sum = " << *ptr << endl;
    return 0;
}
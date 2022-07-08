# include<iostream>
using namespace std;

int Add(int a, int b){
    return a+b;
}
void sayName(char* name){
    cout<< "Hello " << name << endl;
}
int main(){
    int c;
    // Syntax for accessing the function pointer data
    int (*p)(int, int);
    // p = &Add;
    // c = (*p)(2, 3); // Dereferncing and executing the function 
    p = Add;
    c = p(2, 3); // Dereferncing and executing the function 
    cout<< "Sum = " << c << endl; 

    void (*ptr)(char *);
    ptr = sayName;
    ptr("sanket");
    return 0;
}
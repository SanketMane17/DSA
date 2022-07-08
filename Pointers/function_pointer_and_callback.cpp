# include<iostream>
using namespace std;

    void A(){
        cout<< "Hello" << endl;
    }
    void B(void (*ptr)()){ // Function pointer as argument
        ptr(); // call-back function that ptr points to
    }
int main(){
    // void (*p)() = A;
    // B(p);
    // We can also write above code as following
    B(A); // A is call-back function 
    return 0;
}
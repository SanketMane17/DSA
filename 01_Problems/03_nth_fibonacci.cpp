# include<iostream>
using namespace std;

int nthFib(int n) {
    int a = 0, b = 1;
    int fib = 0;
    cout<< a << " " << b;
    for(int i = 3;i <= n;i++) {
        fib = a + b;
        cout << " " << fib;
        a = b;
        b = fib;
    }
    cout<< endl;

    return fib;
}

int main(){
    int n;
    cout<< "Enter value of n = ";
    cin>> n;

    cout<< endl << n << "th fibonacci number is = " << nthFib(n) << endl;   
    // nthFib(n);

    return 0;
}
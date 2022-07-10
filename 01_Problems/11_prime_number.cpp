# include<iostream>
using namespace std;

bool isPrime(int n) {
    for(int i = 2;i < n;i++) {
        if(n % i == 0) {
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cout<< "Enter number = ";
    cin>> n;

    if(isPrime(n) == false) 
        cout<< "Not a prime";
    else 
        cout<< "Prime";
    return 0;
}
# include<iostream>
using namespace std;

bool isEven(int num) {
    if(num % 2 == 0) {
        return true;
    }
    return false;  
}

int main(){
    int num;
    cout<< "Enter num = ";
    cin>> num;

    if(isEven(num) == true) {
        cout<< num << " is even number" << endl;
    } else {
        cout<< num << " is odd number" << endl;
    }
    return 0;
}
# include<iostream>
using namespace std;

int main(){
    int a = 2, b = 6;

    cout<< "a & b = " << (a & b) << endl;
    cout<< "a | b = " << (a | b) << endl;
    cout<< "~a = " << (~a) << endl;
    cout<< "~b = " << (~b) << endl;
    cout<< "a ^ b = " << (a ^ b) << endl;

    cout<< (17 >> 1) << endl;
    cout<< (17 >> 2) << endl;
    cout<< (19 << 1) << endl;
    cout<< (21 << 2) << endl;
    return 0;
}
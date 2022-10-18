# include<bits/stdc++.h>
using namespace std;

int power(int n) {
    // base case
    if(n == 0)
        return 1;

    // recursive rule
    return 2 * power(n - 1);
}

int main(){
    int n;
    cout<< "Enter n = ";
    cin>> n;

    int pow = power(n);
    cout<< "Power = " << pow << endl;
    return 0;
}
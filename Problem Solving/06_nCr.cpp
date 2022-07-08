# include<iostream>
using namespace std;

int fact(int a) {
    int f = 1;
    for(int i = 1; i <= a;i++) {
        f *= i;
    }
    return f;
}

int nCr(int n, int r) {
    // nCr = n!/(r!*(n-r)!)
    if(r == 0) {
        return 1;
    }
    
    int num = fact(n);
    int denom = fact(r) * fact(n-r);
    return num/denom;
}

int main(){
    int n = 8, r = 0;
    // cout<< "Enter values for n and r = ";
    // cin>> n >> r;

    cout<< n << "C" << r << " = " << nCr(n, r) << endl;
    return 0;
}
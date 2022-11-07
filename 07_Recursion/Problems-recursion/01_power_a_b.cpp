# include<bits/stdc++.h>
using namespace std;

int power(int a, int b) {

    // base cases
    if(b == 0)
        return 1;
    if(b == 1)
        return a;

    // recursive rule
    int ans = power(a, b / 2);

    if(b & 1) // odd
        return a * ans * ans;
    else return ans * ans; // even
}

int main(){
    
    int a, b;
    cout<< "Enter a and b " << endl;
    cin>> a >> b;

    cout<< power(a, b) << endl;
    return 0;
}
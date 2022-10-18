# include<bits/stdc++.h>
using namespace std;

void printForward(int n) {
    
    // base case
    if(n == 0)
        return;

    // recursive rule
    printForward(n - 1);
    
    // processing
    cout<< n << " ";
}

void printBackward(int n) {

    // base case
    if(n == 0)
        return;
    
    // processing
    cout<< n << " ";
    
    // recursive rule
    printBackward(n - 1);
}

int main(){
    int n = 5;

    cout<< "Printing in forward direction" << endl;
    printForward(n);
    cout<< endl << "Printing in backward direction" << endl;
    printBackward(n);
    return 0;
}
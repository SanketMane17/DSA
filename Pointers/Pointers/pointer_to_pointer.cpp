# include<iostream>
using namespace std;

int main(){
    int x = 5;
    int *p = &x;
    *p = 6;
    int **q = &p;
    int ***r = &q;

    cout<< "*p = " << *p << endl;  
    cout<< "*q = " << *q << endl;
    cout<< "**q = " << *(*q) << endl;
    cout<< "**r = " << *(*(r)) << endl;
    cout<< "***r = " << *(*(*(r))) << endl; // it's a good practice to write parenthesis

    ***r = 10;
    cout<< "x = " << x <<endl;
    **q = *p + 4;
    cout<< "x = " << x << endl;
    return 0;
}
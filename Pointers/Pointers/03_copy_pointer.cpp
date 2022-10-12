# include<bits/stdc++.h>
using namespace std;

int main(){
    int a = 5;

    int *p1 = &a;
    (*p1)++;
    int *p2 = p1;

    cout<< a << endl;
    cout<< *p1 << endl;
    cout<< *p2 << endl;
    return 0;
}
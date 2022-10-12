# include<bits/stdc++.h>
using namespace std;

int main(){
    
    // int *p; // Basically this is bad practice for initializing pointer, it will intitialize to some garbage address
    // Instead we can do like

    int i = 5;
    int *p = 0; // But when we print value 
    p = &i;

    cout<< p << endl;
    cout<< *p << endl;
    return 0;
}
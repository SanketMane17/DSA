// Global variable : Share varibles between the functionz
// 1. We can achieve by using reference variable
// 2. By using global variable(bad practice)

# include<bits/stdc++.h>
using namespace std;

int x = 512; // Global variable

void a(int i) {
    cout<< x << " in a" <<endl;
}
void b(int i) {
    cout<< x << " in b" <<endl;
}

int main(){
    int i = 5;
    cout<< x << " in main" << endl;
    a(i);
    b(i);    
    return 0;
}


# include<bits/stdc++.h>
using namespace std;

void update(int *p) {
    // p = p + 1; // Address not changes
    *p = *p + 1; // Values changes
}

int main(){
    
    int value = 5;

    int *p = &value;

    cout<< "Before = " << value << endl;
    update(p);
    cout<< "After = " << value << endl;
    return 0;
}
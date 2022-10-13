# include<bits/stdc++.h>
using namespace std;

void update(int **p) {
    // p = p + 1; // Not changes in main function
    // *p = *p + 1; // Changes address at p
    **p = **p + 1; // Changes value at p
}

int main(){
    int i = 5;
    int *p = &i;
    int **p2 = &p;

    cout<< "Before " << endl;
    cout<< i << endl;
    cout<< p << endl;
    cout<< p2 << endl;
    cout<< endl;
    update(p2);
    cout<< "After " << endl;
    cout<< i << endl;
    cout<< p << endl;
    cout<< p2 << endl;
    return 0;
}
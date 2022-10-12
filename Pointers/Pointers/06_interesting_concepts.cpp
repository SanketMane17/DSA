# include<bits/stdc++.h>
using namespace std;

int main(){
    
    int arr[3] = {1, 2, 3};

    // All are same
    cout<< arr[2] << endl;
    cout<< *(arr + 2) << endl;

    cout<< 2[arr] << endl;
    cout<< *(2 + arr) << endl;
    return 0;
}
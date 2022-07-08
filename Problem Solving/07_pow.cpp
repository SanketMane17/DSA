# include<iostream>
using namespace std;

int pow(int a, int b) {
    int ans = 1;
    for(int i = 1; i <= b;i++) {
        ans *= a;
    }
    return ans;
}

int main(){
    int a = 2;
    int b = 3;

    cout<< pow(a, b) << endl;
    return 0;
}
// 371 is an Armstrong number since 3^3 + 7^3 + 1^3 = 371

# include<bits/stdc++.h>
using namespace std;

string checkArmostrong(int n) {
    
    int temp = n;
    int armstrong = 0;
    while(n != 0) {
        int digit = n % 10;
        armstrong += pow(digit, 3);
        n = n / 10;
    }
    
    if(armstrong == temp)
        return "Yes";
    return "No";
}

int main(){
    int n = 151;

    cout<< checkArmostrong(n) << endl;
    return 0;
}

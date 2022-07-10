# include<iostream>
# include<math.h>
using namespace std;

int main(){
    int n;
    cout<< "Enter binary number's = ";
    cin>> n;

    int ans = 0;
    int i = 0;
    while (n != 0)
    {
        int digit = n % 10;
        ans += (digit * pow(2, i));
        n /= 10;
        i++;
    }
    cout<< "Answer is = " << ans;
    
    return 0;
}
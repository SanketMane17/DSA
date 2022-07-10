// i/p = 25
// o/p = 5

// i/p = 27
// o/p = sqrt(27) = 5.2 = 5 (use floor function)

# include<iostream>
# include<math.h>
using namespace std;

long long int sqrtInteger(int n) {

    int s = 0, e = n;
    long long int mid = s + (e - s) / 2;
    long long int ans = -1;

    while (s <= e)
    {
        long long int square = mid * mid;

        if(square == n) 
            return mid;
        else if(square < n) {
            ans = mid;
            s = mid + 1;
        }
        else
            e = mid - 1;

        mid = s + (e - s) / 2;
    }
    return ans;    
}

// if we want to calculate answer in the form of floating points

double morePrecision(int num, int precision, int tempSol) {
    double factor = 1;
    double ans = tempSol;

    for(int i = 0;i < precision;i++) {
        factor = factor / 10;
        for(double j = ans; j*j < num; j += factor) {
            ans = j;
        }
    }
    return ans;
}

int main(){
    // int n = 10000; // Overflows the size of integer, so use long long int
    int n = 37;
    int tempSol = sqrtInteger(n);

    cout<< "Sqrt(" << n << ") = " << morePrecision(n, 3, tempSol) << endl;
    return 0;
}
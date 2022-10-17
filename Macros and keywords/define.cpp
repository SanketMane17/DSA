// Macro : a piece of code in a program that is replaced by value of macro

// Example : #define
// #define PI 3.14
// 1. In this program value of PI is replaced with above macro before the compile time
// 2. So, it never uses extra memory

#include <bits/stdc++.h>
using namespace std;
#define PI 3.14

int main(){

    double r = 5;
    double area = PI * r * r;
    cout<< area;
    return 0;
}
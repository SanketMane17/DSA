#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10] = {1, 2, 4, 5};

    // char chars[7] = "Sanket";

    // cout<< arr << endl; // It will print address of 0th index
    // cout<< chars << endl; // It will print content as it is ie Sanket, because it will starts from 0th index and get the character until we reach to the end ie. \0 character 

    // char *c = &chars[0];
    // cout<< c << endl; // Prints entire string

    // char temp = 's';
    // char *ch = &temp;
    // cout<< ch << endl;

    char *c = "Sanket"; // Very risky don't use this
    cout << *c << endl;
    return 0;
}
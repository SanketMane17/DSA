#include <bits/stdc++.h>
using namespace std;

// Bad practice example
int& func(int a) {
    int num = a;
    int& ans = num;
    return ans;
}
// Here, in above code num has a local scope, so when this function gets terminated after some calling this function the memory of num will get terminated so, there is no meaning to create a reference variable inside functio and return it.
// Also, same problem with pointers
int* func1(int a) {
    int *ans = &a;
    return ans;
}

void update1(int n) { // Not changes
    n++;
}

void update2(int& n) { // Changes
    n++;
}

int main()
{
    /*
    int i = 5;
    int& j = i; // j is reference variable of i

    cout<< "i = " << i << endl;
    cout<< "j = " << j << endl;

    i++;
    cout<< "i = " << i << endl;
    cout<< "j = " << j << endl;

    j++; // When we increment j, i also get incremented
    cout<< "i = " << i << endl;
    cout<< "j = " << j << endl;
    */

   int n = 5;

   cout<< "Before " << endl;
   cout<< n << endl;
   update2(n);
   cout<< "After " << endl;
   cout<< n << endl;

   func(n); // Bad practice
    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int amount = 1330;
    int Rs100, Rs50, Rs20, Rs1;

    // Using if statements
    /*
    if(n >= 100) {
        rem = n % 100;
        cout<< "Hundred's = " << n/100 << endl;
    }

    if(rem >= 50 && rem < 100) {
        cout<< "Fifty's = " << rem/50 << endl;
        rem = rem % 50;
    }

    if(rem < 50) {
        cout<< "Twenty's = " << rem/20 << endl;
        rem = rem % 20;
    }

    if(rem <= 10) {
        cout<< "One's = " << rem << endl;
    }
    */

    // Using switch case

    switch (1)
    {

    case 1:
        Rs100 = amount / 100;
        amount = amount % 100;
        cout << "No of 100 Rupee notes required are=" << Rs100 << endl;

    case 2:
        Rs50 = amount / 50;
        amount = amount % 50;
        cout << "No of 50 Rupee notes required are=" << Rs50 << endl;

    case 3:
        Rs20 = amount / 20;
        amount = amount % 20;
        cout << "No of 20 Rupee notes required are=" << Rs20 << endl;

    case 4:
        Rs1 = amount / 1;
        amount = amount % 1;
        cout << "No of 1 Rupee notes required are=" << Rs1 << endl;
    }
}
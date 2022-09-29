#include <bits/stdc++.h>
using namespace std;

int romanToInteger(string str) {

    int sum = 0;
    int i = 0;
    while(i < str.length()) {

        if(str[i] == 'I' && str[i + 1] == 'V') {
            sum += 4;
            i++;
        }
        else if(str[i] == 'I' && str[i + 1] == 'X') {
            sum += 9;
            i++;
        }

        else if(str[i] == 'X' && str[i + 1] == 'L') {
            sum += 40;
            i++;
        }
        else if(str[i] == 'X' && str[i + 1] == 'C') {
            sum += 90;
            i++;
        }

        else if(str[i] == 'C' && str[i + 1] == 'D') {
            sum += 400;
            i++;
        }
        else if(str[i] == 'C' && str[i + 1] == 'M') {
            sum += 900;
            i++;
        }

        else if(str[i] == 'I')
            sum += 1;
        else if(str[i] == 'V')
            sum += 5;
        else if(str[i] == 'X')
            sum += 10;
        else if(str[i] == 'L')
            sum += 50;
        else if(str[i] == 'C')
            sum += 100;
        else if(str[i] == 'D')
            sum += 500;
        else if(str[i] == 'M')
            sum += 1000;
        i++;
    }
    return sum;
}

int main()
{

    string str = "MMCCCXCIX";
    // string str = "DM";

    cout << romanToInteger(str) << endl;
    return 0;
}
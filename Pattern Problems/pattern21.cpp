/*
    1111
     222
      33
       4
*/

#include <iostream>
using namespace std;

int main()
{
    int n, row = 1;
    cout << "Enter n = ";
    cin >> n;

    while (row <= n)
    {
        int space = row - 1;
        int position = n - row + 1;
        int col = 1;
        int value = row;
        while (space)
        {
            cout << " ";
            space--;
        }
        while (position)
        {
            cout << value;
            position--;
        }
        cout << endl;
        row = row + 1;
    }
    return 0;
}
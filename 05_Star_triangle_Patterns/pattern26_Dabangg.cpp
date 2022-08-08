/*
    1 2 3 4 5 5 4 3 2 1
    1 2 3 4 * * 4 3 2 1
    1 2 3 * * * * 3 2 1
    1 2 * * * * * * 2 1
    1 * * * * * * * * 1
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n = ";
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        /*
        First triangle

            1 2 3 4 5
            1 2 3 4
            1 2 3
            1 2
            1
        */
        int col = 1;
        int tri_1 = n - row + 1;
        while (tri_1)
        {
            cout << col << " ";
            col++;
            tri_1--;
        }

        /*
        Second triangle

                  * *
                * * * *
              * * * * * *
            * * * * * * * *
        */

        int tri_2 = (row - 1) * 2;
        while (tri_2)
        {
            cout << "* ";
            tri_2--;
        }

        /*
        Thirst triagle

            5 4 3 2 1
              4 3 2 1
                3 2 1
                  2 1
                    1
        */

        int tri_3 = n - row + 1;
        while (tri_3)
        {
            cout << tri_3 << " ";
            tri_3--;
        }

        cout << endl;
        row++;
    }
    return 0;
}
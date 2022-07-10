# include<iostream>
using namespace std;

int main(){
    int n1 = 3, n2 = 4, n3 = 3;
    // answer - 3*3
    int m1[n1][n2]; // first - 3*4 (n1*n2)
    
    int m2[n2][n3]; // second - 4*3 (n2*n3)

    for(int i = 0;i < n1;i++) {
        for(int j = 0;j < n2;j++) {
            cin>> m1[i][j];
        }
    }

    for(int i = 0;i < n2;i++) {
        for(int j = 0;j < n3;j++) {
            cin>> m2[i][j];
        }
    }

    int m3[n1][n3]; // answer - 3*3 (n1*n3)

    for(int i = 0;i < n1;i++) {
        for(int j = 0;j < n3;j++) {
            m3[i][j] = 0;
        }
    }

    // Matrix multiplication
    for(int i = 0;i < n1;i++) {
        for(int j = 0;j < n3;j++) {
            for(int k = 0;k < n2;k++) {
                m3[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }
    cout<< endl;

    // Printing matrix multiplication
    for(int i = 0;i < n1;i++) {
        for(int j = 0;j < n3;j++) {
            cout<< m3[i][j] << " ";
        }
        cout<< endl;
    }
    
    return 0;
}
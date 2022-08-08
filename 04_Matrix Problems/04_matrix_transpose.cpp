# include<iostream>
# include<algorithm>
using namespace std;

int main(){
    // Given 2-D matrix
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // Logic for transpose of matrix
    // Approch-1
    // for(int i = 0;i < 3;i++){
    //     for(int j = i;j < 3;j++) {
    //         int temp = arr[i][j];
    //         arr[i][j] = arr[j][i];
    //         arr[j][i] = temp;
    //     }
    // }

    for(int i = 0;i < 3;i++) 
        for(int j = 0;j < i;j++) 
            swap(arr[i][j], arr[j][i]);

    // Printing the matrix
    for(int i = 0;i < 3;i++) {
        for(int j = 0;j < 3;j++) {
            cout<< arr[i][j] << " ";
        }
        cout<< endl;
    }

    return 0;
}
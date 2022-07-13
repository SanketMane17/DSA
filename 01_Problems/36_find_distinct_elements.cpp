# include<iostream>
using namespace std;

void distinctElem(int *arr, int n) {
    int i, j;
    for(i = 0;i < n;i++) {
        for(j = 0;j < i;j++) {
            if(arr[i] == arr[j])
                break;
        }

        if(i == j) {
            cout<< arr[i] << " ";
        }
    }
}

int main(){
    int arr[] = {1, 2, 2, 3, 3};
    // distinct elements = 1, 2, 3

    int n = sizeof(arr) / sizeof(arr[0]);

    distinctElem(arr, n);
    return 0;
}
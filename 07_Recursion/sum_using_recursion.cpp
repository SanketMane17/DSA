# include<bits/stdc++.h>
using namespace std;

int getSum(int *arr, int size) {

    // base case
    if(size == 0)
        return 0;
    if(size == 1)
        return arr[0];

    // recursive rule
    int remainingPart = getSum(arr + 1, size - 1);
    
    // processing
    int sum = arr[0] + remainingPart;
    return sum;
}

int main(){
    
    int arr[] = {5, 5, 5,5 ,5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int sum = getSum(arr, size);
    cout<< "Sum = " << sum << endl;    
    return 0;
}
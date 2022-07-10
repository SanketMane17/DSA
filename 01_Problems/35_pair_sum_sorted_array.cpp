# include<iostream>
using namespace std;

int pairSumSortedArr(int *arr, int n, int k) {
    int cnt = 0;

    int first = 0, next = n - 1;
    while(first < next) {
        int sum = arr[first] + arr[next];
        if(sum == k) {
            cnt++;
            first++;
            next--;
        } else if(sum < k) {
            first++;
        } else {
            next--;
        }
    }

    if(cnt == 0) return -1;
    return cnt;
}

int main(){
    int arr[] = {1, 5, 7, 10, 11, 16};
    int k = 17; // Sum of pair
    // int arr[] = {1, 2, 3, 4, 5, 6, 7};
    // int k = 8; // Sum of pair(given)
    int n = sizeof(arr) / sizeof(arr[0]);

    cout<< "Count of pair sum = " << pairSumSortedArr(arr, n, k) << endl;
    return 0;
}
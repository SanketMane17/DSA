# include<bits/stdc++.h>
using namespace std;

void print(vector<int> &arr) {
    for(int i = 0;i < arr.size();i++)
        cout<< arr[i] << " ";
    cout<< endl;
}

int partition(vector<int> &arr, int s, int e) {


    int pivot = arr[s];
    int cnt = 0;

    // finding right position of pivot
    for(int i = s + 1;i <= e;i++) 
        if(arr[i] < pivot)
            cnt++;
 
    // place pivot at right position
    int pivotIndex = s + cnt;
    swap(arr[pivotIndex], arr[s]);

    // left and right side arrangement
    int i = s, j = e;
    while(i < pivotIndex && j > pivotIndex) {
        while(arr[i] < pivot)
            i++;
        while(arr[j] > pivot)
            j--;

        if(i < pivotIndex && j > pivotIndex) {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
}

void quickSort(vector<int> &arr, int s, int e) {

    // base case
    if(s >= e) 
        return;

    // create partition
    int p = partition(arr, s, e);

    // sort left part
    quickSort(arr, s, p - 1);
    // sort right part
    quickSort(arr, p + 1, e);
}

int main(){

    vector<int> arr = {3, 1, 4, 5, 2};
    int n = arr.size();

    quickSort(arr, 0, n - 1);   
    print(arr);
    return 0;
}

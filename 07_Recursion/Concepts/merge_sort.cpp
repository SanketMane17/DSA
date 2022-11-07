# include<bits/stdc++.h>
using namespace std;

// TC - O(nlogn)
// SC - O(n)

void merge(vector<int> &arr, int s, int e) {

    int mid = s + (e - s) / 2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    int mainArrayIndex = s;
    for(int i = 0;i < len1;i++) {
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid + 1;
    for(int i = 0;i < len2;i++) {
        second[i] = arr[mainArrayIndex++];
    }

    // merge two sorted arrays

    int i = 0, j = 0;
    mainArrayIndex = s;

    while(i < len1 && j < len2) {
        if(first[i] < second[j])
            arr[mainArrayIndex++] = first[i++];
        else 
            arr[mainArrayIndex++] = second[j++];
    }

    while(i < len1) arr[mainArrayIndex++] = first[i++];
    while(j < len2) arr[mainArrayIndex++] = second[j++];
}

void mergeSort(vector<int> &arr, int s, int e) {

    // base case
    if(s >= e)
        return;

    int mid = s + (e - s) / 2;

    // sort left part
    mergeSort(arr, s, mid);

    // sort right part
    mergeSort(arr, mid + 1, e);

    // merge sorted arrays
    merge(arr, s, e);
}

int main(){
    
    vector<int> arr = {38, 27, 43, 3, 9, 82, 10};

    mergeSort(arr, 0, arr.size() - 1);

    for(int i = 0;i < arr.size();i++) 
        cout<< arr[i] << " ";
    cout<< endl;   
    return 0;
}
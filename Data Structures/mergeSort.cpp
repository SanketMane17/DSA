#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int s, int e) {

    int mid = (s+e)/2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    //copy values
    int mainArrayIndex = s;
    for(int i=0; i<len1; i++) {
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid+1;
    for(int i=0; i<len2; i++) {
        second[i] = arr[mainArrayIndex++];
    }

    //merge 2 sorted arrays     
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;

    while(index1 < len1 && index2 < len2) {
        if(first[index1] < second[index2]) {
            arr[mainArrayIndex++] = first[index1++];
        }
        else{
            arr[mainArrayIndex++] = second[index2++];
        }
    }   

    while(index1 < len1) {
        arr[mainArrayIndex++] = first[index1++];
    }

    while(index2 < len2 ) {
        arr[mainArrayIndex++] = second[index2++];
    }

    delete []first;
    delete []second;
}

void mergeSort(vector<int> &arr, int s, int e) {
    if(s >= e)
        return;

    int mid = (s + e) / 2;

    // Sort left portion
    mergeSort(arr, s, mid);
    // Sort right portion
    mergeSort(arr, mid + 1, e);

    // Merge two sorted arrays
    merge(arr, s, e);
}

int main()
{
    vector<int> arr = {2, 6, 2, 4, 0, 1};
    int n = arr.size();

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    return 0;
}
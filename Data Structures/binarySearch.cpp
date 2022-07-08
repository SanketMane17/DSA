# include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2; // (start + end) / 2;
    // Because, when indexes start and end having greater values then test case cannot be solved so use this technique to avoid this ( Integer overflow )

    while(start <= end) {

        if(arr[mid] == key)     
            return mid;
        
        if(key > arr[mid])
            start = mid + 1;
        else if(key < arr[mid]) 
            end = mid - 1;
    
        mid = start + (end - start) / 2; // (start + end) / 2; 
    }

    return -1;
}

int main(){
    int even[] = {2, 3, 4, 6, 7, 9};
    int odd[] = {3, 5, 7, 9, 11};

    int evenIndex = binarySearch(even, 6, 1);
    int oddIndex = binarySearch(odd, 5, 11);
    cout<< "Index of 1 is = " << evenIndex << endl;
    cout<< "Index of 11 is = " << oddIndex << endl;
    return 0;
}
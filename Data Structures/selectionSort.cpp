# include<iostream>
# include<vector>
using namespace std;

void selectionSort(vector<int> &arr, int n) {

    // TC - O(n^2)
    // SC - O(1)

    for(int i = 0;i < n - 1;i++) {
        int minIndex = i;
        for(int j = i + 1;j < n;j++) {
            if(arr[j] < arr[minIndex])
                minIndex = j;
        }

        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

int main(){
    vector<int> arr = {2, 6, 2, 4, 0, 1};

    cout<< "Before sort" << endl;
    for(int i = 0; i < arr.size();i++) 
        cout<< arr[i] << " ";
    cout<< endl;
    selectionSort(arr, arr.size());
    cout<< "After sort" << endl;
    for(int i = 0; i < arr.size();i++) 
        cout<< arr[i] << " ";
    cout<< endl;
    return 0;
}
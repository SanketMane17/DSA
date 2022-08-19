# include<iostream>
# include<vector>
using namespace std;

void insertionSort(vector<int> &arr) {

    for(int i = 1;i < arr.size();i++) {
        int x = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[j] > x) {
            arr[j + 1] = arr[j]; // right shift
            j--;
        }
        arr[j+1] = x;
    }
}

int main(){
    
    vector<int> arr = {2, 6, 4, 0, 1};

    cout<< "Before sorting" << endl;
    for(int i = 0;i < arr.size();i++)
        cout<< arr[i] << " ";   

    insertionSort(arr);
    cout<< endl;

    cout<< "After sorting" << endl;
    for(int i = 0;i < arr.size();i++)
        cout<< arr[i] << " "; 

    return 0;
}
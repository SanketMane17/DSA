# include<iostream>
# include<array>
using namespace std;

int main(){
    
    array<int, 4> arr = {1, 2, 3, 4};

    int size = arr.size();

    for(int i = 0;i < size;i++) {
        cout<< arr[i] << " ";
    }
    cout<< endl;

    cout<< "Element at second index: " << arr.at(2) << endl;
    cout<< "Empty of not: " << arr.empty() << endl;

    cout<< "First element: " << arr.front() << endl;
    cout<< "Second element: " << arr.back() << endl;
    return 0;
}
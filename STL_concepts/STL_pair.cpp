# include<iostream>
using namespace std;

int main(){

    // Using single pair
    pair<int, int> p = {1, 3};;
    cout<< "First: " << p.first << "\nSecond: " << p.second << endl;

    // Using single pair with multiple values
    pair<int, pair<int, int>> p1 = {1, {2, 3}};
    cout<< p1.first << " " << p1.second.first << " " << p1.second.second << endl; 

    // Array using pairs
    pair<int, int> arr[3] = {{1, 2}, {3, 4}, {5, 6}};
    cout<< arr[2].first << " " << arr[2].second << endl;
    return 0;
}
# include<iostream>
# include<vector>
using namespace std;

int main(){
    // vector<int> v;

    // Vector of known size
    vector<int> a(5, 1); // Initialize all values of vector with 1

    // cout<< "Printing vector a" << endl;
    // for(int i: a) {
    //     cout<< i << " ";
    // } cout<< endl;

    // Copying one vector into another
    // vector<int> lastVec(a);

    // cout<< "Printing last vector" << endl;
    // for(int i: lastVec) {
    //     cout<< i << " ";
    // } cout<< endl << endl;

    // cout<< "Capacity: " << v.capacity() << endl;

    // v.push_back(1);
    // v.push_back(3);
    // v.push_back(5);
    // cout<< "Capacity: " << v.capacity() << endl;
    // cout<< "Size: " << v.size() << endl;

    // for(int i:v) {
    //     cout<< i << " ";
    // }
    // cout<< endl;

    // cout<< "First: " << v.front() << endl;
    // cout<< "Last: " << v.back() << endl;

    // v.shrink_to_fit();
    // cout<< "Capacity: " << v.capacity() << endl;
    // cout<< "Size: " << v.size() << endl;

    // // Clearing vector
    // v.clear();
    // cout<< "Capacity: " << v.capacity() << endl;
    // cout<< "Size: " << v.size() << endl;


    // Iterators 
    vector<int> v = {1, 2, 3, 4};
    vector<int>::iterator it = v.begin();

    cout<< *(it) << endl;
    return 0;
}
# include<iostream>
# include<deque>
using namespace std;

int main(){

    // Doubly ended queue
    deque<int> d;

    d.push_back(1);
    d.push_front(2);
    d.push_back(3);
    d.push_front(4);
    

    // d.pop_back();
    for(int i:d) {
        cout<< i << " ";
    } cout<< endl;

    // cout<< "Element at: " << d.at(1) << endl;
    // cout<< "First element: " << d.front() << endl;
    // cout<< "Last element: " << d.back() << endl;

    // cout<< "Empty or not: " << d.empty() << endl;

    cout<< "Before erase" << endl;
    for(int i:d) {
        cout<< i << " ";
    } cout<< endl << endl;

    cout<< "After erase" << endl;
    d.erase(d.begin(), d.begin() + 2);
    for(int i:d) {
        cout<< i << " ";
    } cout<< endl;
    return 0;
}
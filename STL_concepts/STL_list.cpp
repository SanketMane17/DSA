# include<iostream>
# include<list>
using namespace std;

int main(){
    
    // Doubly Linked List -> Random access not possible
    list<int> l;

    list<int> n(5, 100);// Iniliazing 5 elements with 100

    for(int i:n) {
        cout<< i << " ";
    } cout<< endl;

    l.push_back(2);
    l.push_front(1);
    l.push_back(3);
    l.push_front(4);
    l.push_back(5);
    l.push_front(6);

    // l.pop_back();
    // l.pop_front();

    for(int i:l) {
        cout<< i << " ";
    } cout<< endl;

    // Erase element in list
    cout<< "Before erase" << endl;
    for(int i:l) {
        cout<< i << " ";
    } cout<< endl << endl;

    l.erase(l.begin());

    cout<< "After erase" << endl;
    for(int i:l) {
        cout<< i << " ";
    } cout<< endl;
    return 0;
}
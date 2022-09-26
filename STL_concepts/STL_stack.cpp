# include<iostream>
# include<stack> // Library
using namespace std;

// TC for all operations - O(1)

int main(){
    
    // Stack - Last In First Out (LIFO)
    stack<string> s;

    s.push("Sanket");
    s.push("Mahesh");
    s.push("Kishor");

    // Top element 
    cout<< "Element at top : " << s.top() << endl;

    // Size of stack
    cout<< "Size : " << s.size() << endl;

    // Pop element
    s.pop();

    // Size of stack
    cout<< "Size : " << s.size() << endl;

    while(!s.empty()) {
        cout<< s.top() << " ";
        s.pop();
    }
    return 0;
}
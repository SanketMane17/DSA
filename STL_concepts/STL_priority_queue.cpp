# include<bits/stdc++.h>
#include<queue> // Library
using namespace std;

int main(){
    
    // Max heap - Greatest element is at the top
    priority_queue<int> maxi;

    maxi.push(1);
    maxi.push(5);
    maxi.push(4);
    maxi.push(3);
    maxi.push(7);

    // Top element
    cout<< "Max Heap" << endl;
    cout<< maxi.top() << endl;

    while(!maxi.empty()) {
        cout<< maxi.top() << " ";
        maxi.pop();
    }
    cout<< endl;

    // Min heap - Smallest element is at the top
    priority_queue<int, vector<int>, greater<int>> mini;

    mini.push(1);
    mini.push(5);
    mini.push(4);
    mini.push(3);
    mini.push(7);

    // Top element
    cout<< "Min Heap " << endl;
    cout<< mini.top() << endl;

    while(!mini.empty()) {
        cout<< mini.top() << " ";
        mini.pop();
    }
    return 0;
}
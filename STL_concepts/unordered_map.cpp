# include<iostream>
# include<unordered_map>
using namespace std;

int main(){

    unordered_map<string, int> un_map;
    pair<string, int> p("abc", 1);
    
    // insert in map
    // #1
    un_map.insert(p);
    // #2
    un_map["def"] = 2;

    // find or access
    cout<< "abc = " << un_map["abc"] << endl;
    cout<< "def = " << un_map.at("def") << endl;


    // cout<< p.first << " " << p.second << endl;

    cout<< "Works fines";
    return 0;
}
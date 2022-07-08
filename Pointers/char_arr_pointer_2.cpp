# include<iostream>
using namespace std;

void print(const char *c){ // const for only reading the string, we cannot modify it
    // c[0] = 'A'; // cannot modify
    while (*c != '\0')  
    {
        cout<< *c;
        c++;
    }
    
}

int main(){
    char *c = "Hello";
    print(c);
    return 0;
}
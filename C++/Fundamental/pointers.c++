#include <iostream>
using namespace std;

int main(){
    // create pointers
    string food = "matcha";
    string* ptr = &food;

    cout << food << endl;

    // dereferencing
    cout << ptr << endl; // output the address - reference
    cout << *ptr << endl; // output the value - deference

    // modify pointers
    *ptr = "tea";
    cout << *ptr << endl;
    cout << food << endl;
    cout << ptr << endl;
}
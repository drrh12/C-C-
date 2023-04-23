#include <iostream>
using namespace std;

int main(){
    //syntax
    if(20 > 18){
        cout << "20 is greater than 18" << endl;
    }
    //ternary
    int x = 1, y = 5;
    int result = ( x < y) ? true : false;

    cout << result << endl;
}
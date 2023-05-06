#include <iostream>
using namespace std; 

void myFunction(){
    cout << "executed" << endl;
}

int funcSum(int x){
    return x + x;
}

void swapNums(int &x, int &y){
    int z = x;
    x = y;
    y = z;
}

int main (){ 
    int firstNum = 10;
    int secondNum = 20;

    cout << "Before swap: " << endl;
    cout << "First num: " << firstNum << endl;
    cout << "Second num: " << secondNum << endl;
    
    swapNums(firstNum, secondNum);
    
    cout << "After swap: " << endl;
    cout << "First num: " << firstNum << endl;
    cout << "Second num: " << secondNum << endl;
    
}


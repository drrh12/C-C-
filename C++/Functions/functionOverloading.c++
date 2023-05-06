#include <iostream>
using namespace std;

int plusFunc(int x, int y){
    return x + y;
}

double plusFunc(double x, double y){
    return x + y;
}

int main(){
    int myNum1 = plusFunc(1, 1);
    double myNum2 = plusFunc(1.12, 1.12);

    cout << "Int: " << myNum1 << endl;
    cout << "Double: " << myNum2 << endl;
}
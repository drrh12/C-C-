#include <iostream>
using namespace std;

class MyClass{
    public: 
        int myNum;
        string myString;
};

class Car{
    public:
        string brand;
        int year;

        int speed(int maxSpeed);
};

int Car::speed(int maxSpeed){
    return maxSpeed;
};

int main(){
    MyClass myObj;
    myObj.myNum = 10;
    myObj.myString = "string";


    cout << myObj.myNum << endl;
    cout << myObj.myString << endl;

    Car carEx;
    carEx.brand = "fiat";
    carEx.year = 2020;

    cout << "Card: " << carEx.brand << " " << carEx.speed(100) << endl;    
    
}   
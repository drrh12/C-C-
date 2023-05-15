#include <iostream>
using namespace std;

class MyClass{
    public:
        MyClass(){
            cout << "test" << endl;
        };
};

class Car{
    public:
        string model;
        int year;
    Car(string a, int b){
        model = a;
        year = b;
    };
};

int main(){
    MyClass myObj;
    Car carEx01("fiat", 2000);
    Car carEx02("ferrari", 2023);

    cout << carEx01.model << carEx02.model << endl;
    return 0;
}
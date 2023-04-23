#include <iostream>
using namespace std;

int main (){
    int day; 

    cout << "What day is today?" << endl;
    cin >> day;

    switch(day){
        case 1:
            cout << false << endl;
            break;
        case 23:
            cout << true << endl;
            break;
        default:
            cout << "Wrong, repeat!";
    }
}
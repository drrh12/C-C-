#include <iostream>
using namespace std;

int main(){
    string cars[4] = {"Volvo", "BMW", "Mercedes", "Mazda"};
    cout << cars[2] << "\n";

    int myNum[3] = {10, 27, 30};
    cout << myNum[1] << "\n";

    // arrays and loops

    for(int i = 0; i < 5; i++){
        cout << cars[i] << "\n";
    }

    // get array size

    cout << sizeof(myNum) << "\n";

    // multi-dimensional arrays

    string letters[2][4] = {
        {"A", "B", "C", "D"},
        {"E", "F", "G", "H"}
    };

    // print B and H

    cout << "output should be C: " << letters[0][2] << '\n' << "output should be H: " << letters[1][3] << endl;

    string dimensional[2][2][2] = {
        {
            {"A", "B"},
            {"C", "D"}
        },
        {
            {"E", "F"},
            {"G", "H"}
        }
    };

    // print C and F

    cout << "output should be C: " << dimensional[0][1][0] << '\n' << "output should be F: " << dimensional[1][0][1] << endl; 

}
#include <iostream>
using namespace std;

int main(){
    struct {
        int numbers;
        string strings;
    } myStructure;
    
    myStructure.numbers = 1;
    myStructure.strings = "letters";

    cout << myStructure.numbers << endl;
    cout << myStructure.strings << endl;
}
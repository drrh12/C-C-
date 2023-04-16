#include <iostream>

using namespace std;

int main (){
    int integersVariable = 1;
    double  doubleVariable = 10.00;
    char charVariable = 'a';
    string stringVariable = "my name is";
    bool boolVariable = true;

    cout << integersVariable << endl;
    cout << doubleVariable << endl;
    cout << charVariable << endl;
    cout << stringVariable << endl;
    cout << boolVariable << endl;
    // multiple variable declaration
    int multipleIntegersVariables = 1, mIV = 2, mIV2 = 3;
    cout << multipleIntegersVariables + mIV + mIV2 << endl;
    // constants

    const int birthdayYear = 1996, birthdayMonth = 2, birthdayDay = 2;
    cout << "I was born on " << birthdayYear << "/" << birthdayMonth << "/" << birthdayDay << endl;
}
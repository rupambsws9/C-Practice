//Size of a datatypes in c++
#include <iostream>
using namespace std;

int main() {
    int num1 = 10;
    float num2 = 3.14;
    double num3 = 99.99;
    char letter = 'A';
    bool isTrue = true;

    cout << "Size of int: " << sizeof(num1) << " bytes" << endl;
    cout << "Size of float: " << sizeof(num2) << " bytes" << endl;
    cout << "Size of double: " << sizeof(num3) << " bytes" << endl;
    cout << "Size of char: " << sizeof(letter) << " bytes" << endl;
    cout << "Size of bool: " << sizeof(isTrue) << " bytes" << endl;

    return 0;
}
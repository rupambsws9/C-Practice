//print the largest of 3 numbers
#include<iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << "Enter the third number: ";
    cin >> c;

    if (a==b && a==c) {
        cout << "All numbers are equal." << endl;
    }else if (a >= b && a >= c) {
        cout << "The largest number is: " << a << endl;
    } else if (b >= a && b >= c) {
        cout << "The largest number is: " << b << endl;
    }else {
        cout << "The largest number is: " << c << endl;
    }

    return 0;
}
//print the largest of 2 numbers
#include<iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    if(a > b) {
        cout << "The largest number is: " << a << endl;
    } else if(a == b) {
        cout << "Both numbers are equal." << endl;
    }else{
        cout << "The largest number is: " << b << endl;
    }

    return 0;
}
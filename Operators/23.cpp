//assignment operator in c++
#include<iostream>
using namespace std;

int main(){
    int a = 10;
    cout << "a before using assignment operator: " << a << endl; // 10
    a+=5; // a = a + 5
    cout << "a after using assignment operator: " << a << endl; // 15

    cout << " " << endl;

    int b=10;
    cout << "b before using assignment operator: " << b << endl; // 10
    b = b-5; // b = b - 5
    cout << "b after using assignment operator: " << b << endl; // 5

    cout << " " << endl;

    int c=10;
    cout << "c before using assignment operator: " << c << endl; // 10
    c = c*5; // c = c * 5
    cout << "c after using assignment operator: " << c << endl; // 50

    cout << " " << endl;

    int d=10;
    cout << "d before using assignment operator: " << d << endl; // 10
    d = d/5; // d = d / 5
    cout << "d after using assignment operator: " << d << endl; // 2

    cout << " " << endl;

    int e=10;
    cout << "e before using assignment operator: " << e << endl; // 10
    e = e%5; // e = e % 5
    cout << "e after using assignment operator: " << e << endl; // 0

    return 0;
}
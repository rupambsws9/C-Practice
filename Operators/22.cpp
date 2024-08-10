// unary operator
#include <iostream>
using namespace std;

int main() {
    int x = 5;
    cout << "x before increment: " << x << endl; // 5
    x++; // x = x + 1
    cout << "x after increment: " << x << endl; // 6

    int y = 5;
    cout << "y before decrement: " << y << endl; // 5
    y--; // y = y - 1
    cout << "y after decrement: " << y << endl; // 4
    
    cout <<" "<<endl;

    int a = 3;
    cout << "a before increment: " << a << endl; // 3
    int b = ++a; // pre-increment
    cout << "a after pre-increment: " << a << endl; // 4
    cout << "b after pre-increment: " << b << endl; // 4

    cout <<" "<<endl;

    int c = 3;
    cout << "c before increment: " << c << endl; //
    int d = c++; // post-increment
    cout << "c after post-increment: " << c << endl; // 4
    cout << "d after post-increment: " << d << endl; // 3

    cout << " " << endl;

    int e =3;
    cout << "e before decrement: " << e << endl; // 3
    int f = --e; // pre-decrement
    cout << "e after pre-decrement: " << e << endl; // 2
    cout << "f after pre-decrement: " << f << endl; // 2

    cout <<" "<<endl;

    int g = 3;
    cout << "g before decrement: " << g << endl; // 3
    int h = g--; // post-decrement
    cout << "g after post-decrement: " << g << endl; // 2
    cout << "h after post-decrement: " << h << endl; // 3

    return 0;
}
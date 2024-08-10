//explicit type conversions in c++
#include<iostream>
using namespace std;

int main(){
    float PI = 3.14;

    cout << (int)PI << endl; // 3
    cout << (float)10/3 << endl; // 3.33333
    cout << (int)'A' << endl; // 65
    return 0;
}
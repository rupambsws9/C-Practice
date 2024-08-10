//logical operator in c++
#include<iostream>
using namespace std;

int main(){
    cout << ((3<5) && (3<6)) <<endl; // 1
    cout << ((3<5) && (3>6)) <<endl; // 0
    cout << ((3<5) || (3>6)) <<endl; // 1
    cout <<!(3==5) <<endl; // 1
    return 0;
}
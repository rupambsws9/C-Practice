//ternary operator in c++
#include<iostream>
using namespace std;

int main(){
    bool isAdult; //1/0
    int age;
    cout << "Enter your age: ";
    cin >> age;
    isAdult = (age >= 18)? true : false;
    cout << "Are you an adult: " << (isAdult? "Yes" : "No") << endl;
    return 0;
}
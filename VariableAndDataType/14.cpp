//Build a Simple Interest Calculator.
#include<iostream>
using namespace std;

int main(){
    float p,r,t;

    cout << "Enter Principal (P): ";
    cin >> p;

    cout << "Enter Rate (R): ";
    cin >> r;

    cout << "Enter Time (T): ";
    cin >> t;

    //Calculate Simple Interest
    float SI = (p * r * t) / 100;

    cout << "Simple Interest: " << SI << endl;

    return 0;
}
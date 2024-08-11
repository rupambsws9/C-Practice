//print the digits of a given number in reverse using while loop in c++
#include<iostream>
using namespace std;
int main() {
    int num,remender,reverse=0;
    cout << "Enter the number: ";
    cin >> num;
    while (num > 0) {
    remender = num % 10;
    reverse = (reverse * 10) + remender;
    num = num / 10;
    }
    cout << "Reverse of the number is: " << reverse << endl;
    return 0;
}

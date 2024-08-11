//print the sum of digit of a number using while loop in c++
#include<iostream>
using namespace std;

int main(){
    int num, sum = 0, remainder;

    cout << "Enter a number: ";
    cin >> num;

    while(num!= 0){
        remainder = num % 10;
        sum += remainder;
        num /= 10;
    }
    cout << "Sum of digits: " << sum << endl;
    return 0;
}
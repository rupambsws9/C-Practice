//Write a C++ program to get a number from the user and print whether it's positive , negative or zero.
#include<iostream>
using namespace std;

int main(){
    int number;
    cout << "Enter the number: ";
    cin>> number;
    if(number<0){
        cout << "The number " << number << " is negative." <<endl;
    }else if(number>0){
        cout << "The number " << number << " is positive." <<endl;
    }else{
        cout << "The number " << number << " is Zero." <<endl;
    }
    return 0;
}
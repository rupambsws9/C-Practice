//WAP where user can keep entering numbers till they enter a multiple of 10
#include<iostream>
using namespace std;

int main(){
    int num;
    do {
        cout << "Enter a number: ";
        cin >> num;
        if(num % 10 == 0) {
            cout << "The entered number is a multiple of 10." << endl;
            break; //Breaks the loop if the entered number is a multiple of 10
        }
            cout << "The entered number is not a multiple of 10." << endl;
    
    }
    while(true); //The loop continues as long as the entered number is not a multiple of 10
    return 0;
}
//WAP to show numbers entered by user except multiple of 10 within 1 to 1000
#include<iostream>
using namespace std;

int main(){
    int num;
    do{
        cout << "Enter a number (1-1000): ";
        cin >> num;
        if(num%10==0){
            cout << "Entered number is a multiple of 10. Please enter again." << endl;
            continue;
        }
        cout << "Entered number: " << num << endl;
    }
    while(num >= 1 && num <= 1000);
    return 0;
}
//build a calculator by using switch for the 4 basic arithmatic operations (+,-,*,/)
#include<iostream>
using namespace std;

int main(){
    int a,b;
    char op;
    cout << "Enter the first number: ";
    cin>> a;
    cout << "Enter the operator (+,-,*,/): ";
    cin>> op;
    cout << "Enter the second number: ";
    cin>> b;

    switch(op){
        case '+':
            cout << "The result is: " << a+b << endl;
            break;
        case '-':
            cout << "The result is: " << a-b << endl;
            break;
        case '*':
            cout << "The result is: " << a*b << endl;
            break;
        case '/':
            if(b!=0){
                cout << "The result is: " << a/b << endl;
            }
            else{
                cout << "Error! Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "Error! Invalid operator. Please enter correct operator (+,-,*,/)." << endl;
    }
    return 0;
}
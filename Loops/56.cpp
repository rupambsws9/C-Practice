//WAP to print the multiplication table of a number,entered by the user in c++
#include<iostream>
using namespace std;

int main(){
    int num,mul=1;
    cout << "what multiplication table you want to print: ";
    cin >> num;
    cout << "he multiplication table is: "<<endl;
    for(int i=1;i<=10;i++){
        mul=i*num;
        cout << num << " * " << i << " = " << mul << endl;
    }
    cout << endl;
}
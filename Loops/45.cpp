//print the sum of odd digits of a number using while loop in c++
#include<iostream>
using namespace std;

int main(){
    int num,remender,sum=0;
    cout << "Enter the number: ";
    cin>>num;

    while(num!=0){
        remender = num%10;
        if(remender%2!=0){
            sum+=remender;
        }
        num=num/10;
    }
    cout << "Sum of odd digits: " << sum << endl;
    return 0;
}
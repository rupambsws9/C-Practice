//WAP to input a number and check whether the number is an Armstrong number or not in c++
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n,num,count=0;
    cout << "Enter the number: ";
    cin >> n;
    num=n;
    while(num!=0){
    num/=10; 
    count++;
    }
    int number,cubesum=0;
    number = n;
    while(){
        int lastdigit = num %10;
        cubesum += pow(lastdigit,count);
        num/=10;
    }
    if(n==cubesum){
    cout << "The number " << n << "is an Armstrong number." <<endl;
    }else{
        cout << "The number " << n << " is not an Armstrong number." <<endl;
    }
    return 0;
}
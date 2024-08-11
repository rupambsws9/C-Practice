//check if a number is prime or not in c++
#include <iostream>
using namespace std;

int main(){
    int num;
    bool isPrime = true;
    cout << "Enter a number: ";
    cin>>num;
    for(int i=2;i<num-1;i++){
        if(num%i==0){
            isPrime = false;
            break;
        }
    }
    if(isPrime==true){
        cout <<"The number " <<num<<" is prime." << endl;
    }else{
        cout <<"The number " <<num<<" is not prime." << endl;
    }
return 0;
}
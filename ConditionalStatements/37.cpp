/*For any 3 digit number check whether it is an Armstrong number or not.Armstrong number is a number that is equal to
the sum of cubes of its digits.*/
#include<iostream>
using namespace std;

int main(){
    int num,n;
    cout<<"Enter a 3-digit number: ";
    cin>>n;
    num = n;
    int dig1 = num%10;
    num /= 10;
    int dig2 = num%10;
    num /= 10;
    int dig3 = num;
    int qubesum=dig1*dig1*dig1 + dig2*dig2*dig2 + dig3*dig3*dig3;
    cout << "Qubesum = " <<  "(" << dig1 << "*" << dig1 << "*" << dig1 << ")" << "+" << "(" << dig2 << "*" << dig2 << "*" << dig2 << ")" <<"+" << "(" << dig3 << "*" << dig3 << "*" << dig3 << ")" << " = " << (dig1*dig1*dig1) <<"+" <<(dig2*dig2*dig2) <<"+" <<(dig3*dig3*dig3) << " = " << qubesum << endl;
    if(qubesum == n){
        cout<<n<<" is an Armstrong number."<<endl;
    }else{
        cout<<n<<" is not an Armstrong number."<<endl;
    }
    return 0;
}
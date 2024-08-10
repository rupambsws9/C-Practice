//create an income tax calculator(<5 lakh 0,>5 lakh && <10 lakh 20%,>10 lakh 30%)
#include<iostream>
using namespace std;

int main(){
    double income,tax,amount;
    cout<<"Enter your annual income: ";
    cin>>income;

    if(income<500000){
        tax=0;
        cout<<"Your tax is: "<<tax <<endl;
        amount=income-tax;
        cout<<"Your income after tax deduction is: "<< amount <<endl;
    }else if((income>=500000)&&(income<1000000)){
        tax=0.05*income;
        cout<<"Your tax is: "<<tax <<endl;
        amount=income-tax;
        cout<<"Your income after tax deduction is: "<<amount<<endl;
    }else if(income>=1000000){
        tax=0.15*income;
        cout<<"Your tax is: "<<tax <<endl;
        amount=income-tax;
        cout<<"Your income after tax deduction is: "<<amount<<endl;

    }else{
        cout<<"Invalid income!"<<endl;
    }
    return 0;
}
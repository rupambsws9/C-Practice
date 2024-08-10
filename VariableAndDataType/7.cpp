//using setprecision in c++
#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    float pi1 = 3.14159265359;
    double pi2 = 3.14159265359;
    cout << setprecision(15) <<"PI(float) = " << pi1 <<endl;
    cout << setprecision(15) <<"PI(double) = " << pi2 << endl;
    return 0;
}
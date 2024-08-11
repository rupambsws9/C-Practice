//sum of n natural numbers in c++
#include<iostream>
using namespace std;

int main(){
    int n, sum = 0;
    cout << "Enter the range: ";
    cin >> n;
    for(int i=0;i<=n;i++){
        sum+=i;
    }
    cout << "Sum of 1 to "<<n<< " = " << sum << endl;
    return 0;
}
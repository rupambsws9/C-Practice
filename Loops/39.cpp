//print my name many times in c++
#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of times you want to print your name: ";
    cin >> n;
    for(int i = 0; i < n; i++){
        cout << "Rupam Biswas" << endl;
    }
    return 0;
}
//continue statement in c++
#include<iostream>
using namespace std;

int main(){
    int num = 5;
    for(int i = 1; i <= num;i++){
        if(i == 3){
            continue; //skips the current iteration and moves to the next iteration
        }
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
//break statement in c++
#include<iostream>
using namespace std;

int main(){
    int i;
    for(i=1; i<=5; i++){
        if(i==3){
            break;
        }
        cout << i << endl;
    }
    return 0;
}
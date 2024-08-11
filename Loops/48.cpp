//difference between while and do while loop in c++
#include<iostream>
using namespace std;

int main(){
    int i =1;
    //while loop
    while(i>5){
        cout << "while: " << i << endl;
        i++;
    }

    //do while loop
    i = 1;
    do{
        cout << "do while: " << i << endl;
        i++;
    }while(i>5);//do while loop will always execute at least once, unlike while loop
    return 0;
}
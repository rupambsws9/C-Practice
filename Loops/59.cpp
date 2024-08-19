//For a positive N,WAP that prints the first N Fibonacci numbers where n >=2 in cpp
#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the range: ";
    cin >> n;
    int fst_num = 0,snd_num =1;
    cout << fst_num << " " << snd_num << " ";
    for(int i=2;i<=n;i++){
        int trd_num = fst_num + snd_num;
        cout << trd_num << " ";
        fst_num = snd_num;
        snd_num = trd_num;
    }
    cout << endl;
    return 0;
}
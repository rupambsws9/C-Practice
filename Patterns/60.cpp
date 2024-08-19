//nested loop in c++
#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter range(rows and cols): ";
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
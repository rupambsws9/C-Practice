//print numbers from n to 1 in c++
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    for (int i = n; i >0; i--) {
        cout << i << " ";
    }
cout << endl;
    return 0;
}
//For a positive N ,WAP that print sall the prime numbers from 2 to N in c++
#include<iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if(num <= 1) return false; // 0 and 1 are not prime numbers
    if(num == 2 || num == 3) return true; // 2 and 3 are prime numbers
    if(num % 2 == 0 || num % 3 == 0) return false; // Multiple of 2 and 3 are not prime
    
    for(int i = 5; i * i <= num; i += 6) {
        if(num % i == 0 || num % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;

    cout << "Prime numbers from 2 to " << N << " are: " << endl;
    for(int i = 2; i <= N; i++) {
        if(isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
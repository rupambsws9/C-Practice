//Write a program to calculate the area of a circle
#include<iostream>
#define PI 3.14
using namespace std;

int main(){
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    double area = PI * radius * radius;
    cout << "The area of the circle is: " << area << endl;
    return 0;
}
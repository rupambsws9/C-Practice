//print average marks
#include<iostream>
using namespace std;

int main(){
    float eng;
    float sci;
    float math;

    cout<<"Enter the marks in English: ";
    cin>>eng;

    cout<<"Enter the marks in Science: ";
    cin>>sci;

    cout<<"Enter the marks in Mathematics: ";
    cin>>math;

    float avg = ( eng +sci + math ) / 3;
    cout<<"The average marks are: "<<avg<<endl;

    return 0;
}
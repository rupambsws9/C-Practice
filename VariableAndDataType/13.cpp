/*Enter cost of 3 items from the user(using float datatype)-a pencil,a pen and an eraser.You have to output the total
cost of the items back to the user as their bill.(Add on:You can also try adding 18% GST tax to the items in the bill
as an advanced problem)
*/
#include<iostream>
using namespace std;

int main(){
    float apen, eraser, pencil;

    cout << "Enter the cost of the pen: ";
    cin >> apen;

    cout << "Enter the cost of the eraser: ";
    cin >> eraser;

    cout << "Enter the cost of the pencil: ";
    cin >> pencil;

    float total_cost = apen + eraser + pencil;

    cout << "The total cost of the items is: " << total_cost << " rupees"<< endl;
    float cgst,sgst;
    cgst = total_cost * 0.09;
    sgst = total_cost * 0.09;
    cout << "Cost of CGST: " << cgst << " rupees" << endl;
    cout << "Cost of SGST: " << sgst << " rupees" << endl;
    cout << "The total GST cost is: " << cgst+sgst << " rupees" << endl;
    float total_gst = total_cost + cgst + sgst;
    cout << "The total cost including 18% GST is: " << total_cost + total_gst <<" rupees"<< endl;
    return 0;
}
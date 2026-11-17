#include <iostream>
#include "Rectangle.h"
using namespace std;
int main(){
    Rectangle rect1;
    float userlength, userwidth;
    cout << "----- Rectangle 1 ----"<< endl;
     cout << "Enter length of rectangle: " <<endl;
    cin >> userlength;
    cout << "Enter width of rectangle: "<<endl;
    cin>>userwidth;
    rect1.setlength(userlength);
    rect1.setwidth(userwidth);
    cout << "The area of rectangle is: "<< rect1.calculateArea()<< endl;
    Rectangle rect2;
    float userlength2, userwidth2;
    cout << "----- Rectangle 2 ----"<< endl;
     cout << "Enter length of rectangle: " <<endl;
    cin >> userlength2;
    cout << "Enter width of rectangle: "<<endl;
    cin>>userwidth2;
    rect2.setlength(userlength2);
    rect2.setwidth(userwidth2);
    cout << "The area of rectangle is: "<< rect2.calculateArea()<< endl;
    return 0;
}
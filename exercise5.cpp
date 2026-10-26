#include<iostream>
using namespace std;
double calculatesquarearea(double side){
    return side * side;
}
double calculaterectanglearea(double length, double width){
    return length * width;
}
double calculatetrianglearea(double base, double height){
    return 0.5 * height * base;
}
int main (){
    int choice;
    while (true){
        cout << "Please select the area of the shape to calculate"<<endl;
        cout << "1. Square"<<endl;
        cout <<"2. Rectangle"<<endl;
        cout <<"3. Triangle"<<endl;
        cout <<"4. Quit Program"<<endl;
        cout << "Enter selection: ";
        cin >> choice;
        if(choice == 0){
            cout << "Exiting the program...."<< endl;
            break;
        }
        switch(choice){
            case 1: {
                double side;
                cout << "Enter side length of square: "<<endl;
                cin >> side;
                cout << " The area of square is: "<<calculatesquarearea(side)<<endl;
                break;
            }
            case 2: {
            double length, width;
            cout << "Enter the length of Rectangle: "<<endl;
            cin >> length;
            cout << "Enter the width of rectangle: "<<endl;
            cin >> width;
            cout << "The area of Rectangle is: "<< calculaterectanglearea(length, width)<<endl;
            break;
            }
        case 3: {
        double height, base;
        cout << "Enter the height of triangle: "<<endl;
        cin >> height;
        cout << "Enter the base of the triangle: "<<endl;
        cin >> base;
        cout <<"The area of triangle is: "<< calculatetrianglearea(height, base)<<endl;
        break;
        }
        cout<< "Your input was: "<< choice << " which is an invalid input"<<endl;
        cout<< "Please enter a valid input!!!"<<endl;
        break;
    } 
}
return 0;
}

#include <iostream>
#include "rectangle.h"
#include "triangle.h"
using namespace std;
int main(){
    rectangle rect;
    triangle trigl;
    rect.setvalues(4,5);
    trigl.setvalues(4,5);
    cout << rect.area() << '\n';
    cout << trigl.area() << '\n';
    return 0;
}
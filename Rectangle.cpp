#include "Rectangle.h"
using namespace std;
    Rectangle::Rectangle(){
        length = 0.0f;
        width = 0.0f;
    }
    Rectangle::~Rectangle(){

    }
    Rectangle::Rectangle(float L, float W){
        length = L;
        width = W;
    }
void Rectangle::setlength(float L){
    length = L;
}
float Rectangle::getlength(){
    return length;
}
void Rectangle::setwidth(float W){
    width = W;
}
float Rectangle::getwidth(){
    return width;
}
float Rectangle::calculateArea(){
    return length*width;
}
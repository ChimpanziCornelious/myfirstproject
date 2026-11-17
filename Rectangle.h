#include<iostream>
#pragma once
using namespace std;
class Rectangle{
    public:
        Rectangle();
        Rectangle(float L, float W);
        ~Rectangle();
        void setlength(float L);
        float getlength();
        void setwidth(float W);
        float getwidth();
        float calculateArea();
    private:
            float length;
            float width;
};
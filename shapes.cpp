#include "shapes.h"
#include <cmath>
namespace shapes{
    Square::Square(){
        sidelength = 0.0;
    }
    Square::Square(double L){
        sidelength = L;
    }
    void Square:: setlength(double L){
        sidelength = L;
    }
    double Square:: getlength()const{
        return sidelength; 
    }
    Square::~Square(){

    }

    Circle::Circle(){
        radius = 0.0;
    }
    Circle::Circle(double r){
        radius = r;
    }
    void Circle::setradius(double r){
        radius = r;
    }
    double Circle::getradius()const{
        return radius;
    }
    Circle::~Circle(){

    }

    Triangle::Triangle(){
        height = 0;
        base = 0;
    }
    Triangle::~Triangle(){

    }
    Triangle::Triangle(double b, double h){
        base = b;
        height = h;
    }
    void Triangle::setbase(double b){
        base = b;
    }
    double Triangle::getbase()const{
        return base;
    }
    void Triangle::setheight(double h){
        height = h;
    }
    double Triangle::getheight()const{
        return height;
    }
    double Area::calculateCirclearea(const Circle& circle){
        return M_PI * circle.getradius() *  circle.getradius();
    }
    double Area:: calculateSquarearea(const Square& square){
        return square.getlength() * square.getlength();
    }
    double Area::calculateTrianglearea(const Triangle& triangle){
        return 0.5 * triangle.getbase() * triangle.getheight();
    }
}
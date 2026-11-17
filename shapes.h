#pragma once
namespace shapes{
    class Square{
        private:
            double sidelength;
        public:
            Square();
            Square(double sidelength);
            ~Square();
            void setlength(double L);
            double getlength()const;
    };
    class Triangle{
        private:
        double base;
        double height;
        public:
        Triangle();
        Triangle(double base, double height);
        ~Triangle();
        void setbase(double b);
        double getbase()const;
        void setheight(double h);
        double getheight()const;

    };
    class Circle{
        private:
        double radius;
        public:
        Circle();
        Circle(double radius);
        ~Circle();
        void setradius(double r);
        double getradius()const;
    };
    class Area{
        public:
       static double calculateCirclearea(const Circle& circle);
       static double calculateSquarearea(const Square& square);
       static double calculateTrianglearea(const Triangle& triangle);
    };
}
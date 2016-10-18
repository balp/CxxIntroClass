#include <vector>

class Shape {
    public:
        virtual double area();
};

class Circle : public Shape {
    public:
        Circle(double radius) : radius(radius) {}
        virtual double area() {
            return 2*3.14*radius;
        }
    private:
        double radius;
};

class Rectangle: public Shape {
    public:
        Rectangle(double width, double height) : width(width), height(height) {}
        virtual double area() {
            return width*height;
        }
    private:
        double width;
        double height;
};

class Triangle: public Shape {
    public:
        Triangle(double width, double height) : width(width), height(height) {}
        virtual double area() {
            return width*height/2;
        }
    private:
        double width;
        double height;
};

double area() {
    std::vector<Shape> v;
    v.push_back(Rectangle(2.0,2.0));  
    v.push_back(Triangle(2.0,2.0));
    v.push_back(Circle(3.0));
    double area = 0;
    for(auto &s : v) {
      area += s.area();
    }
    return area;
}


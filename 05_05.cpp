#include <iostream>
#include <cmath>
using namespace std;

// Shape 基类
class Shape {
public:
    virtual void calculateArea() = 0;    // 纯虚函数，子类必须实现
    virtual void calculateCircumference() = 0;    // 纯虚函数，子类必须实现
};

// Circle 类
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    void calculateArea() override {
        double area = 3.14 * radius * radius;
        cout << "圆面积: " << area << endl;
    }

    void calculateCircumference() override {
        double circumference = 2 * 3.14 * radius;
        cout << "圆周长: " << circumference << endl;
    }
};

// Rectangle 类
class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    void calculateArea() override {
        double area = length * width;
        cout << "矩形面积: " << area << endl;
    }

    void calculateCircumference() override {
        double circumference = 2 * (length + width);
        cout << "矩形周长: " << circumference << endl;
    }
};

// Triangle 类
class Triangle : public Shape {
private:
    double side1;
    double side2;
    double side3;

public:
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}

    void calculateArea() override {
        // 使用海伦公式计算三角形面积
        double s = (side1 + side2 + side3) / 2;
        double area = sqrt(s * (s - side1) * (s - side2) * (s - side3));
        cout << "三角形面积: " << area << endl;
    }

    void calculateCircumference() override {
        double circumference = side1 + side2 + side3;
        cout << "三角形周长: " << circumference << endl;
    }
};

int main() {
    // 创建派生类对象并进行初始化和计算
    Circle circle(5);
    circle.calculateArea();
    circle.calculateCircumference();

    Rectangle rectangle(4, 6);
    rectangle.calculateArea();
    rectangle.calculateCircumference();

    Triangle triangle(3, 4, 5);
    triangle.calculateArea();
    triangle.calculateCircumference();

    return 0;
}

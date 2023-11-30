#include <iostream>
#include <cmath>
using namespace std;

// Shape ����
class Shape {
public:
    virtual void calculateArea() = 0;    // ���麯�����������ʵ��
    virtual void calculateCircumference() = 0;    // ���麯�����������ʵ��
};

// Circle ��
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    void calculateArea() override {
        double area = 3.14 * radius * radius;
        cout << "Բ���: " << area << endl;
    }

    void calculateCircumference() override {
        double circumference = 2 * 3.14 * radius;
        cout << "Բ�ܳ�: " << circumference << endl;
    }
};

// Rectangle ��
class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    void calculateArea() override {
        double area = length * width;
        cout << "�������: " << area << endl;
    }

    void calculateCircumference() override {
        double circumference = 2 * (length + width);
        cout << "�����ܳ�: " << circumference << endl;
    }
};

// Triangle ��
class Triangle : public Shape {
private:
    double side1;
    double side2;
    double side3;

public:
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}

    void calculateArea() override {
        // ʹ�ú��׹�ʽ�������������
        double s = (side1 + side2 + side3) / 2;
        double area = sqrt(s * (s - side1) * (s - side2) * (s - side3));
        cout << "���������: " << area << endl;
    }

    void calculateCircumference() override {
        double circumference = side1 + side2 + side3;
        cout << "�������ܳ�: " << circumference << endl;
    }
};

int main() {
    // ������������󲢽��г�ʼ���ͼ���
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

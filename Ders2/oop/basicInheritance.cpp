#include <iostream>
using namespace std;

// Soyut sınıf (Abstract class) - Java'daki Interface gibi
class Shape {
public:
    // Saf sanal fonksiyon (Pure virtual function)
    virtual void draw() = 0;

    // Bir sanal fonksiyon daha
    virtual double area() = 0;
};

// Derived class - Circle sınıfı Shape'den miras alır ve fonksiyonları uygular
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}

    // draw fonksiyonunu Circle sınıfına göre implemente ediyoruz
    void draw() override {
        cout << "Drawing a circle" << endl;
    }

    // area fonksiyonunu Circle sınıfına göre implemente ediyoruz
    double area() override {
        return 3.14159 * radius * radius;
    }
};

// Derived class - Rectangle sınıfı Shape'den miras alır ve fonksiyonları uygular
class Rectangle : public Shape {
private:
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}

    // draw fonksiyonunu Rectangle sınıfına göre implemente ediyoruz
    void draw() override {
        cout << "Drawing a rectangle" << endl;
    }

    // area fonksiyonunu Rectangle sınıfına göre implemente ediyoruz
    double area() override {
        return width * height;
    }
};

int main() {
    // Circle ve Rectangle nesneleri oluşturuyoruz
    Shape* circle = new Circle(5.0);
    Shape* rectangle = new Rectangle(4.0, 6.0);

    // Polimorfizm ile her iki şekli de aynı şekilde işleyebiliriz
    circle->draw();
    cout << "Circle area: " << circle->area() << endl;

    rectangle->draw();
    cout << "Rectangle area: " << rectangle->area() << endl;

    // Bellek temizliği
    delete circle;
    delete rectangle;

    return 0;
}

#include <iostream>
using namespace std;

// Soyut sınıf (Abstract class) - Java'daki Interface gibi
class Shape {
public:
    // Saf sanal fonksiyon (Pure virtual function)
    virtual void draw() = 0;

    // Bir sanal fonksiyon daha
    virtual double area() = 0;

    // =0 ifadesi fonksiyonun pure virtual olduğunu ve  
    // inheritte tanımlanmasını söyler
};

// Derived class - bu child gibidir
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}

    // draw fonksiyonunu Circle sınıfına göre implemente ediyoruz
    void draw() override {
        std::cout << "Drawing a circle" << endl;
    }

    double area() override {
        return 3.14159 * radius * radius;
    }

    // override diyerek bunun bir implemntasyon oluğunu gördük
};

// Derived class  miras alır
class Rectangle : public Shape {
private:
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}

    // draw fonksiyonunu Rectangle sınıfına göre implemente ediyoruz
    void draw() override {
        std::cout << "Drawing a rectangle" << endl;
    }

    // area fonksiyonunu Rectangle sınıfına göre implemente ediyoruz
    double area() override {
        return width * height;
    }

// dışarda tanımlamalık fonksiyonun bir prototipi bunu headerda da yapabilirdik
    string outerFunc();
};


// Fonksiyonun dışarıda tanımlanması
std::string Rectangle::outerFunc() {
    return "bu fonksityon dışarda tanımlı"; // Alan hesaplama
}

// sınıf ve fonksiyonları böyle açıkta tanımlamak mümkün javada bunu yapamazdın
// yıldızı sil ve hatayı oku
void autoDrawer( Shape* shape){
    shape->draw();
}


int main() {
    // Circle ve Rectangle nesneleri oluşturuyoruz
    // bir Shape pointerı shapeten miras alan iki farklı yapıya da işaret edebilir
    // 
    Shape* circle = new Circle(5.0);
    Shape* rectangle = new Rectangle(4.0, 6.0);

    // Polimorfizm ile her iki şekli de aynı şekilde işleyebiliriz
    circle->draw();
    cout << "Circle area: " << circle->area() << endl;

    rectangle->draw();
    cout << "Rectangle area: " << rectangle->area() << endl;

    autoDrawer(circle);


    // Bellek temizliği - çöpü kendin çıkarırsın
    delete circle;
    delete rectangle;

    return 0;
}

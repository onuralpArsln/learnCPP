#include <iostream>

int main()
{
    int *ptr; // int için pointer
    int a = 10;
    ptr = &a; // a'nın adresini ptr pointer'ına atıyoruz
    // pointer adres gösterir direk olarak a yı vermeyiz adresine referans

    std::cout << *ptr << std::endl; // a'nın değerini yazdırır: 10
    std::cout << ptr << std::endl;  // anın adresini yazar

    std::cout << a << std::endl;
    std::cout << &a << std::endl;
    std::cout << *&a << std::endl;

    // ptr adrestir *ptr adresteki değer

    *ptr = 20; // a artık 20
    std::cout << a << std::endl;

    int b = 30;
    int &ref = b; // int& bir integer referansı ve b ye referans olmasını istiyoruz

    std::cout << ref << std::endl;

    ref = 40;
    std::cout << b << std::endl;

    // referance null olamaz ama pointer null olabilir
}
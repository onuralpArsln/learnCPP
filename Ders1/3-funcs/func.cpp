#include <iostream>
#include <string>  // burası olmasada çalışır çünkü iostreamde de  var string ama her yerde böyle olmayabilir 

// dönüşü yok void inputlar tip alıyor 
void compare(float floatValue, int intValue) {
    std::cout << "ilk değer " << floatValue << std::endl;
    std::cout << "öbür değer" <<  intValue <<std::endl;
    if (floatValue > intValue) {
        std::cout << "floatValue, intValue'dan büyüktür." << std::endl;
    } else if (floatValue < intValue) {
        std::cout << "floatValue, intValue'dan küçüktür." << std::endl;
    } else {
        std::cout << "floatValue ve intValue eşittir." << std::endl;
    }
}
int main() {

    // Tam sayı tipleri
    int myInt = 42;                       // Standart tam sayı
    unsigned int myUnsignedInt = 100;     // Pozitif tam sayı (negatif sayı alamaz)
    short myShort = 32767;                // Kısa tam sayı
    long myLong = 1234567890L;            // Uzun tam sayı
    long long myLongLong = 123456789012345LL;  // Çok uzun tam sayı

    // Ondalıklı sayılar
    float myFloat = 3.14f;                // Ondalık sayı (tek duyarlıklı)
    double myDouble = 3.141592653589793;  // Ondalık sayı (çift duyarlıklı)
    long double myLongDouble = 3.141592653589793238L;  // Daha yüksek duyarlıklı ondalık sayı

    // Karakter ve string tipleri
    char myChar = 'A';                    // Tek bir karakter
    wchar_t myWideChar = L'B';            // Geniş karakter (Unicode desteği)
    std::string myString = "Hello";       // String (metin)

    // Boolean (doğru/yanlış)
    bool myBool = true;                   // Doğru veya yanlış

    // Sabit sayılar
    const int myConstInt = 10;            // Sabit (değiştirilemez)

    // Pointer (işaretçi)
    int* myPointer = &myInt;              // Bir değişkenin adresini tutar

    // Yapı tipi (struct)
    struct Person {
        std::string name;
        int age;
    };

    Person myPerson = {"John", 25};       // Struct örneği

// int ve float isteyen yere farklı tipler verdik ancak 
//c++ dönüşümü otomatik yapabildiği için yaptı
    compare(myShort,myLong);


}

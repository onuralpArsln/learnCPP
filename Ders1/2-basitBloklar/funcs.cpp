#include <iostream>

// fonksiyonları kullanmadan önce üst satırlarda tanımalısın
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
    // Değişken tanımlamaları
    float floatValue = 5.3;
    float floatValue2 = 5.5;
    int intValue = 5;

    // Kıyaslama
    if (floatValue > intValue) {
        std::cout << "floatValue, intValue'dan büyüktür." << std::endl;
    } else if (floatValue < intValue) {
        std::cout << "floatValue, intValue'dan küçüktür." << std::endl;
    } else {
        std::cout << "floatValue ve intValue eşittir." << std::endl;
    }
    std::cout << "float val" << floatValue<< std::endl;

    compare(floatValue,floatValue2);

    return 0;
}





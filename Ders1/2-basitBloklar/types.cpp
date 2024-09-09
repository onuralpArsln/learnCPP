#include <iostream>

int main() {
    // Değişken tanımlamaları
    float floatValue = 5.0;
    int intValue = 5;

    // Kıyaslama
    if (floatValue > intValue) {
        std::cout << "floatValue, intValue'dan büyüktür." << std::endl;
    } else if (floatValue < intValue) {
        std::cout << "floatValue, intValue'dan küçüktür." << std::endl;
    } else {
        std::cout << "floatValue ve intValue eşittir." << std::endl;
    }

    return 0;
}

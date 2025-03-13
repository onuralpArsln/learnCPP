#include <iostream>
// headerdn alınan direkt bilgiler defValue int gibi
#include "myHeader.h"
// headerdan alınan fonksiyonların tanımlı olduğu dosya
#include "myImplementation.cpp"

int main() {
    int result = add(5, 3);
    std::cout << "The result is: " << result << std::endl;

    printMessage("Hello, World!");


    std::cout << "defValue from header  is: " << defValue << std::endl;



    return 0;
}


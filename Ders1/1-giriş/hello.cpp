// c++ her zaman object oriented olmak zorunda değil
// bir main içinde kodu dümdüz yazmak  mümkün

// import sırasında başa # koyulur ve kütüphane adı < > arasına yazılır
#include <iostream>



int main() {
    // Yazdırma için biraz fazla emek
    std::cout << "Hello, World!" << std::endl;

    // değişkenler önce tip sonra isim olarak tanımlanır 
    int num1, num2, sum;

    // cout c out çıktı, cin c in girdi
    std::cout << "Birinci sayıyı girin: ";
    std::cin >> num1;

    // Kullanıcıdan ikinci sayıyı al
    std::cout << "İkinci sayıyı girin: ";
    std::cin >> num2;

    // Toplama işlemi yap
    sum = num1 + num2;

    // Sonucu ekrana yazdır
    std::cout << "Sonuç: " << sum << std::endl;

    return 0;
}
 
// kullanmak için
// g++ dosya_adi.cpp -o dosya_adi komutu ile compile
// ./dosya_adi ile linuxte dosya_adi.exe ile windowsta çalıştır


// eğer g++ tanınmıyorsa https://code.visualstudio.com/docs/cpp/config-mingw 
// bu adresi takip ederek yüklemeyi yapabilirsin
// c cpp propertiesde compiler olarak g++ sec çünkü gcc bazen c çalıyon sanıyor

// https://ics.uci.edu/~pattis/common/handouts/mingweclipse/mingw.htmlpp
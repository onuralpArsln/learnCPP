#include <iostream>

void staticArray(){    
    
    int arr[5] = {1, 2, 3, 4, 5}; // Boyutu sabit ve derleme zamanında belirlenmiş
    for (int i = 0; i < 5; ++i) {
        std::cout << arr[i] << " ";
    }
}

void dynamicArray(){
     int size;
    std::cout << "Dizi boyutunu girin: ";
    std::cin >> size;

    // Dinamik dizi oluşturma
    int* arr = new int[size]; // Serbest bellekten yer ayrılır

    // Diziye değer atama
    for (int i = 0; i < size; ++i) {
        arr[i] = i + 1;
    }

    // Diziyi yazdırma
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }

    // Belleği serbest bırakma
    delete[] arr;
}








/*

Özellik	            Statik Dizi	                Dinamik Dizi
Bellek Yeri     	Yığın (Stack)	             Serbest (Heap)
Boyut Belirleme 	Derleme zamanında sabit	     Çalışma zamanında değiştirilebilir
Bellek Yönetimi	        Otomatik	        Manuel (new ve delete)
Erişim Hızı	               Daha hızlı	    Genellikle daha yavaş

Yığın (Stack):
Bellek, fonksiyon çağrıları ve yerel değişkenler için kullanılır.
Fonksiyon çağrıldığında, o fonksiyona ait yerel değişkenler yığında yer kaplar. 
Fonksiyon sona erdiğinde, bu yer otomatik olarak serbest bırakılır.
Bellek yönetimi otomatik olarak yapılır; 
geliştirici herhangi bir bellek serbest bırakma işlemi yapmaz.

Serbest (Heap):

Dinamik bellek yönetimi için kullanılır. 
Program çalışma zamanında (runtime) bellek ayırmak için new veya malloc 
gibi işlevler kullanılır.
Bellek, geliştirici tarafından yönetilir. 
Kullanıcı, bellek ayırdığında serbest bırakmayı (delete veya free) unutmamalıdır.

*/
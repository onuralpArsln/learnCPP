#include <iostream>
#include <string>
#include "myHeader.h"

int main(){

        // staticArr headerdan
        // bu c++11 için her sistemde çalışmayabilir
        for (int value : myStaticArr) {
        std::cout << value << " ";
        // neden yeni satıra geçmedi?
    }


// burada ne oldu?
for(int i = 0 ; i < sizeof(myStaticArr)/sizeof(myStaticArr[0]) ; i++){
    std::cout << myStaticArr[i] << std::endl;
}

 std::cout <<  "size of array " << sizeof(myStaticArr)<<  std::endl;
 std::cout <<  "size of first array element  " <<   sizeof(myStaticArr[0])<< std::endl;

    return 0;
}

/*
Type	                                                               Size
bool , char , char8_t , unsigned char , signed char , __int8	         1 byte
char16_t , __int16 , short , unsigned short , wchar_t , __wchar_t	     2 bytes
char32_t , float , __int32 , int , unsigned int , long , unsigned long	 4 bytes
double , __int64 , long double , long long , unsigned long long	         8 bytes

1 byte = 8 bits

Bitler bilgisayar dilinde 0 ve 1 i temsil ederler. 
Byte, 8 Bit'ten oluşur ve 0'dan 255'e kadar olan sayıları temsil edebilir. 
Byte büyük B ile gösterilir, Bit ise küçük b ile gösterilir. 
Yani 1 byte 8 bit büyüklüğündedir.

*/


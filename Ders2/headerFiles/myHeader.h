#ifndef MYFUNCTIONS_H // Guard Yapısı
#define MYFUNCTIONS_H
#include <string> // bunu yoruma almayı dene

// Function declarations
int add(int a, int b);
void printMessage(const std::string& message);

int defValue = 10 ;

#endif 

// Guard yapısının amacı -> Eğer cpp dosyanda bu headerı iki defa aktarmaya çalışırsan 
// (unuttun ve iki kere importladın diyelim)
// Bu yapı headrın iki kere tekrarlanıp gereksiz kaynak harcanmasına engel olur
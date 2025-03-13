#include <iostream>
#include <string>

// Sınıf tanımı
class Person {
private:
    // Private data kısımları sadece class içinde görülür
    std::string name;
    int age;

// Publicler dışardan da alınır
public:
    // Constructor: verileri başlatır 
    // parametreleri parantez içinde aldın ama atama farklı 
    Person(std::string n, int a) : name(n), age(a) {
        // burası fonksiyonel
        std::cout << "yeni person olustu " << age << std::endl;
    }

    static int giveNumber(){
        return 5;
    }
    
    // Setter  name
    void setName(std::string n) {
        name = n;
    }

    // Getter  name
    std::string getName() const {
        return name;
    }

    // Setter  age
    void setAge(int a) {
        age = a;
    }

    // Getter  age
    int getAge() const {
        return age;
    }

    // genel bilgiler
    void displayInfo() const {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

// asıl fonksiyonel kod
int main() {
    // obje oluşumu
    Person person1("Alice", 30);

    // bilgileri gör
    person1.displayInfo();

    // setterlar ile güncelle
    person1.setName("Bob");
    person1.setAge(25);

    // bilgiyi yeniden gör
    person1.displayInfo();

    // burayı yorumdan çıkart ve hata al
    //std::cout << "Name: " << person1.name << ", Age: " << person1.age << std::endl;
    // neden hata aldık -> age ve name person classında private
    return 0;
}

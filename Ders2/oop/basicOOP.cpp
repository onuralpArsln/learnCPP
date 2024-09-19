#include <iostream>
#include <string>

// Define the class
class Person {
private:
    // Private data members (accessible only within the class)
    std::string name;
    int age;

public:
    // Constructor: Initializes data members
    Person(std::string n, int a) : name(n), age(a) {}

    // Public member functions (methods accessible outside the class)
    
    // Setter for name
    void setName(std::string n) {
        name = n;
    }

    // Getter for name
    std::string getName() const {
        return name;
    }

    // Setter for age
    void setAge(int a) {
        age = a;
    }

    // Getter for age
    int getAge() const {
        return age;
    }

    // A method to display Person's information
    void displayInfo() const {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

// Main function
int main() {
    // Create an object of class Person
    Person person1("Alice", 30);

    // Accessing public member functions
    person1.displayInfo();

    // Modify data members using setter functions
    person1.setName("Bob");
    person1.setAge(25);

    // Display updated information
    person1.displayInfo();

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    
    string messages[5] = {"Hello World", "C++", "for loop", "windows bad", "Goodbye"};

    
    for (int i = 0; i < 5; i++) {
        cout << messages[i] << endl; 
    }

    for (const string& message : messages) {
        cout << message << endl;  
    }
    return 0;
}

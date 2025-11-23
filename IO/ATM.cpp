#include <iostream>
#include <string>

int main() {
    std::string PIN;

    std::cout << "Welcome in our bank" << std::endl;
    std::cout << "Enter your PIN: ";
    std::cin >> PIN;

    if(PIN == "1729") {
        std::cout << "PIN is correct" << std::endl;
    } else {
        std::cout << "PIN is not correct" << std::endl;
    }

    return 0;
}

#include <iostream>

int main() {
    int age;
    std::cout << "How old are you: ";
    std::cin >> age;

    if (age < 0) {
        std::cout << "Age cannot be negative" << std::endl;
    }
    else if (age >= 35) {
        std::cout << "You are adult" << std::endl;
        std::cout << "You can be a president" << std::endl;
    }
    else if (age >= 18) {
        std::cout << "You are adult" << std::endl;
        std::cout << "You cannot be a president" << std::endl;
    }
    else {
        std::cout << "You are not adult" << std::endl;
        std::cout << "You cannot be a president" << std::endl;
    }

    return 0;
}

#include <iostream>
#include <string>

int main(){
    std::string name;
    int number;
    std::cout << "What's your name? ";
    std::cin >> name;
    std::cout << "Type an integer: ";
    std::cin >> number;
    for(int i = 1; i <= number; i++ )
    {
        std::cout << i << ". " << name << std::endl;
    }
    return 0;
}

/// my second for loop btw
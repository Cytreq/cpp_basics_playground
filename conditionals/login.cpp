#include <iostream>
#include <string>

std::string login, password;
int main() {
    std::cout << "Type login: ";
    std::cin >> login;
    std::cout << "Type password: ";
    std::cin >> password;
    if((login == "Admin") && (password == "Password"))
    {
        std::cout << "You logged successfully";
    }else {
        std::cout << "Wrong login or password";
    }
    return 0;
}
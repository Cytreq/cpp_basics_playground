#include <iostream>
#include <iomanip>
int main(){
    double F, C;
    std::cin >> F;
    C = 5.0/9.0 * (F - 32);
    std::cout << std::fixed << std::setprecision(2) << C << std::endl;
    return 0;
}
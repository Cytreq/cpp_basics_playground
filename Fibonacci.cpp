#include <iostream>
long double fib[100000]; int n;

int main(){
    std::cout << "How many fibonacci numbers do you want me to calculate: ";
    std::cin >> n;
    fib[0] = 1;
    fib[1] = 1;
    for(int i = 2; i < n; i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
    }
    for(int i = 0; i < n; i++)
    {
        std::cout << fib[i] << std::endl;
    }
    return 0;
}
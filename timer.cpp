#include <iostream> 
#include <windows.h>
#include <cstdlib>
int main(){
    for(int i=15; i >= 0; i--)
    {
        Sleep(1000);
        system("cls");
        std::cout << i << std::endl;
    }
    std::cout << "Start" << std::endl;
    return 0;
}
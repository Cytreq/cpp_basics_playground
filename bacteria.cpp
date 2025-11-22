#include <iostream>
int hours = 0;
long long bacteries = 1;
int main(){
    do
    {
        hours++;
        bacteries = bacteries * 2;
        std::cout << hours << " hours. ";
        std::cout << "Bacteries: " << bacteries << std::endl;
    }while(bacteries <= 1000000000);
    return 0;
}
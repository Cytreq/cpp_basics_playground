#include <iostream>

int people , candies, candies_per_person, rest_of_the_candies_4u;

int main()
{
    std::cout << "How many people: ";
    std::cin >> people;
    std::cout << "How many candies do you have: ";
    std::cin >> candies;

    candies_per_person = candies / (people - 1);
    std::cout << "There are "<< candies_per_person << " candies for every person" << std::endl;
    rest_of_the_candies_4u = candies - candies_per_person * (people - 1);
    std::cout << "There are " << rest_of_the_candies_4u << " candies left for you!" << std::endl;
    return 0;
}
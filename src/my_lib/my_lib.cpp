#include <iostream>
#include <string>

/**
 * @brief Print Hello World to the console
 *
 */
std::string print_Hello_World()
{
    std::string s = "Hello World";
    std::cout << s << std::endl;
    return s;
}


unsigned int factorial(unsigned int number)
{
    return number <= 1 ? number : factorial(number - 1) * number;
}

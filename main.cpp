#include <iostream>

int main()
{
    int a{};
    std::cout << "Введите число: " << std::endl;
    std::cin >> a;
    std::cout << "Вы ввели: " << std::endl;
    std::cout << a << std::endl;
    return EXIT_SUCCESS;

}
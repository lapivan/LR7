#include <iostream>
int getValue()
{
    while (true) 
    {
        int a;
        std::cin >> a;
 

        if (std::cin.fail()  || (std::cin.peek() != '\n'))
        {
            std::cin.clear();
            std::cin.ignore(32767,'\n'); 
            std::cout << "Неопознанная команда. Введите повторно: ";
        }
        else if (a == 1) {
            return a; 
        }
        else if (a == 2) {
            return a; 
        }
        else if (a == 0) {
            return a; 
        }
        else if (a == 3) {
            return a; 
        }
        else if (a == 4) {
            return a; 
        }
        else if (a == 5) {
            return a; 
        }
        else
        {  
            std::cin.clear(); 
            std::cin.ignore(32767,'\n'); 
            std::cout << "Неопознанная команда. Введите повторно: ";
        }
}
}
int getinteger()
{
    while (true) 
    {
        int a;
        std::cin >> a;
 

        if (std::cin.fail()  || (std::cin.peek() != '\n'))
        {
            std::cin.clear();
            std::cin.ignore(32767,'\n'); 
            std::cout << "Неопознанная команда. Введите повторно: ";
        }
        else
        return a;
}
}
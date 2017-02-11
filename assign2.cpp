/* Tyler Snodderly. CIS 126. I have typed all text by myself and have not copied code. This is assignment 2/C++ PDF File: Section 1: Data Types. In this exercise this code will prompt the user and the user will input the answer. This code is deigned to show the different types of data types and how they are incorrperate in C++. The cout is used to output the string that is put in. The cin is used when the user inputs the answer the cout asks for. */

#include <iostream>
#include <string>
std::string firstname;
char initial = ' ';
float money = 0;
int age = 0;

int main()
{
    std::cout << "Enter the your first name:";
    std::cin >> firstname;
    std::cout << "Enter your middle initial:";
    std::cin >> initial;
    std::cout << "Enter the year your were born:";
    std::cin >> age;
    std::cout << "Enter the amount of money you earned:";
    std::cin >> money;
    std::cout << "Your name is " << firstname << " and your middle initial is " << initial << "." << std::endl;
    std::cout << "You were born in the year " << age << " and you earned $" << money << "." << std::endl;
    return EXIT_SUCCESS;
}

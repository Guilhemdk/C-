#include <iostream>
#include <cctype>
#include "../include/PhoneBook.hpp"

std::string trim(const std::string& str)
{
    size_t start = str.find_first_not_of(" \t");
    if (start == std::string::npos)
        return "";
    size_t end = str.find_last_not_of(" \t");
    return str.substr(start, end - start + 1);
}

int main()
{
    PhoneBook PhoneBook;
    std::string command;

    while(true)
    {
        std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, command);
        command = trim(command);

        if (command == "ADD")
            PhoneBook.addContact();
        else if (command == "SEARCH")
        {
            PhoneBook.searchContacts();
            continue;
        }
        else if (command == "EXIT")
        {
            std::cout << "Goodbye!" << std::endl;
            break;
        }
        else
            std::cout << "Invalid Command, Please enter ADD, SEARCH or EXIT." << std::endl;
    }
    return 0;
}

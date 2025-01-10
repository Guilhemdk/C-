#include "../include/PhoneBook.hpp"
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook() : count(0) {}

PhoneBook::~PhoneBook() {}

void PhoneBook::addContact()
{
    std::string fName, lName, nick, phone, secret;

    std::cout << "First Name: ";
    std::getline(std::cin, fName);
    std::cout << "Last Name: ";
    std::getline(std::cin, lName);
    std::cout << "NickName: ";
    std::getline(std::cin, nick);
    std::cout << "phone Number: ";
    std::getline(std::cin, phone);
    std::cout << "Darkest Secret: ";
    std::getline(std::cin, secret);

    Contact newContact(fName, lName, nick, phone, secret);
    if (count < 8)
    {
        contacts[count] = newContact;
        count++;
    }
    else
        contacts[count % 8] = newContact;
}

void PhoneBook::searchContacts() const
{
    if (count == 0)
    {
        std::cout << "You havn t added any contacts yet." << std::endl;
        return;
    }
    std::cout   << std::setw(10) << "Index" << "|"
                << std::setw(10) << "First Name" << "|"
                << std::setw(10) << "Last Name" << "|"
                << std::setw(10) << "Nickname" << "|" << std::endl;
    std::cout << "-------------------------------------------" << std::endl;

    for (int i = 0; i < count; i++)
    {
        const Contact& contact = contacts[i];
        std::cout   << std::setw(10) << i + 1 << "|"
                    << std::setw(10) << contact.TruncateField(Contact::FIRST_NAME) << "|"
                    << std::setw(10) << contact.TruncateField(Contact::LAST_NAME) << "|"
                    << std::setw(10) << contact.TruncateField(Contact::NICK_NAME) << std::endl;
    }
    while (true)
    {
        std::cout << "Enter the index of the contact to display or 0 to go to menu: ";
        int index;
        std::cin >> index;
        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            std::cout << "Invalid input, a number is required." << std::endl;
        }
        else if (index == 0)
        {
            std::cout << "Going back to main menu." << std::endl;
            std::cin.ignore(1000, '\n');
            std::cin.clear();
           break;
        }
        else if (index > count || index < 0)
            std::cout << "Invalid index, enter a number between 1 and " << count << " or 0 to go to menu." << std::endl;
        else
            contacts[index - 1].displayContact();
    }
}


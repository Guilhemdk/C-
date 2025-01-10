#include "../include/Contact.hpp"
#include <iostream>

Contact::Contact() : firstName(""), lastName(""), nickName(""), phoneNumber(""), darkestSecret("") {}

Contact::Contact(const std::string& fName, const std::string& lName,
                 const std::string& nick,const std::string& phone, const std::string& secret)
    : firstName(fName), lastName(lName), nickName(nick), phoneNumber(phone), darkestSecret(secret) {}

std::string Contact::getField(Field field) const
{
    switch (field)
    {
        case FIRST_NAME: return firstName;
        case LAST_NAME: return lastName;
        case NICK_NAME: return nickName;
        case PHONE_NUMBER: return phoneNumber;
        case DARKEST_SECRET: return darkestSecret;
        default: return "Invalid input";
    }
}

std::string Contact::TruncateField(Field field) const
{
    std::string value = getField(field);
    if (value.length() > 10)
        return value.substr(0, 9) + ".";
    return value;
}

void Contact::displayContact() const
{
    std::cout << "First Name: " << firstName << std::endl;
    std::cout << "Last Name: " << lastName << std::endl;
    std::cout << "nickName: " << nickName << std::endl;
    std::cout << "Phone Number: " << phoneNumber << std::endl;
    std::cout << "darkest secret: " << darkestSecret << std::endl;
}

Contact::~Contact() {} 

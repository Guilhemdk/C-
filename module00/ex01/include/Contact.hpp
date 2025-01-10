#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact {

public:
    enum Field {FIRST_NAME, LAST_NAME, NICK_NAME, PHONE_NUMBER, DARKEST_SECRET};

private:
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string darkestSecret;

public:
    //Default

    Contact();

    //Parameterized
    Contact(const std::string& fName, const std::string& lName,
                     const std::string& nick, const std::string& phone,
                     const std::string& secret); 

    std::string getField(Field field) const;
    std::string TruncateField(Field field) const;

    void displayContact() const;

    ~Contact();


};

#endif

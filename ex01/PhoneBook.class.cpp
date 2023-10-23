#include <iostream>
#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"
#include <iostream>

int PhoneBook::_contactIndex = 0;

PhoneBook::PhoneBook( void ) {
	
	std::cout << "Constructor called" << std::endl;
	return ;
}

PhoneBook::~PhoneBook( void ) {
	std::cout << "Destructor called" << std::endl;
	return ;
}

void PhoneBook::Add ( void ) {
	std::string input;
	std::cout << "Insert first name: " << std::endl;
	//std::cin.ignore();
	std::getline(std::cin, input);
	//PhoneBook::contacts[_contactIndex].setFirstName(input);
	//std::cout << "The first name you've inserted is " << input << std::endl;
	std::cout << "Insert last name: " << std::endl;
	
	//std::cin.ignore();
	std::getline(std::cin, input);
	//PhoneBook::contacts[_contactIndex].setLastName(input);
	std::cout << "The last name you've inserted is " << input << std::endl;
	std::cout << "Insert nickname: " << std::endl;
	std::cin.ignore();
	std::getline(std::cin, input); 
	PhoneBook::contacts[_contactIndex].setNickName(input);
	std::cout << "The nickname you've inserted is " << PhoneBook::contacts[_contactIndex].getNickName() << std::endl;
	std::cout << "Insert phone number: " << std::endl;
	std::cin.ignore();
	std::getline(std::cin, input);
	PhoneBook::contacts[_contactIndex].setPhoneNumber(input);
	std::cout << "The phone number you've inserted is " << PhoneBook::contacts[_contactIndex].getPhoneNumber() << std::endl;
	std::cout << "Insert dark secret: " << std::endl;
	std::cin.ignore();
	std::getline(std::cin, input); 
	PhoneBook::contacts[_contactIndex].setDarkSecret(input);
	std::cout << "The dark secret you've inserted is " << PhoneBook::contacts[_contactIndex].getDarkSecret() << std::endl;
	PhoneBook::_contactIndex++;
	return ;
}

void PhoneBook::Search ( void ) {
	std::cout << "Searching contact function" << std::endl;
	return ;
}



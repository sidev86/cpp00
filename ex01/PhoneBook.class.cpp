#include <iostream>
#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"

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
	std::cout << "Insert first name: " << std::endl;
	std::cin >> PhoneBook::contacts[_contactIndex].firstName;
	std::cout << "The first name you've inserted is " << PhoneBook::contacts[_contactIndex].firstName << std::endl;
	std::cout << "Insert last name: " << std::endl;
	std::cin >> PhoneBook::contacts[_contactIndex].lastName;
	std::cout << "The last name you've inserted is " << PhoneBook::contacts[_contactIndex].lastName << std::endl;
	std::cout << "Insert phone number: " << std::endl;
	std::cin >> PhoneBook::contacts[_contactIndex].phoneNumber;
	std::cout << "The phone number you've inserted is " << PhoneBook::contacts[_contactIndex].phoneNumber << std::endl;
	PhoneBook::_contactIndex++;
	return ;
}

void PhoneBook::Search ( void ) {
	std::cout << "Searching contact function" << std::endl;
	return ;
}



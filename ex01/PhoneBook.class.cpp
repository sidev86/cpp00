#include <iostream>
#include <iomanip>
#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"
#include <string>

int PhoneBook::_numOfContacts = 0;
int PhoneBook::_contactIndex = 0;

PhoneBook::PhoneBook( void ) {
	
	std::cout << "Constructor called" << std::endl;
	return ;
}

PhoneBook::~PhoneBook( void ) {
	std::cout << "Destructor called" << std::endl;
	return ;
}

/*void printSpaces(int numSpaces)
{
	int i; 
	
	i = 0; 
	while (i < numSpaces)
	{
		std::cout << " ";
		i++;
	}
}*/

void printField(std::string str)
{
	//int str_len;
	//int numOfSpaces; 
	if (str.length() > 8)
	{
		std::cout << std::setw(7);
		str = str.substr(0, 7);
		std::cout << str << ".|";
	}
	else
	{
		std::cout << std::setw(8);
		std::cout << str << "|";
	}
	/*str_len = str.length();
	std::cout << "str len = " << str_len;
	numOfSpaces = 8 - str_len;
	if (numOfSpaces < 0)
		std::cout << str.substr(0, 7) << ".|";
	else
	{
		printSpaces(numOfSpaces);
		std::cout << str << "|";
	}*/
}

void PhoneBook::Add ( void ) {
	std::string input;
	
	std::cout << "Insert first name: " << std::endl;
	std::getline(std::cin, input);
	//std::cout << "input = " << input << std::endl;
	PhoneBook::contacts[_contactIndex].setFirstName(input);
	std::cout << "The first name you've inserted is " << PhoneBook::contacts[_contactIndex].getFirstName() << std::endl;
	std::cout << "Insert last name: " << std::endl;
	std::getline(std::cin, input);
	PhoneBook::contacts[_contactIndex].setLastName(input);
	std::cout << "The last name you've inserted is " << PhoneBook::contacts[_contactIndex].getLastName() << std::endl;
	std::cout << "Insert nickname: " << std::endl;
	std::getline(std::cin, input); 
	PhoneBook::contacts[_contactIndex].setNickName(input);
	std::cout << "The nickname you've inserted is " << PhoneBook::contacts[_contactIndex].getNickName() << std::endl;
	std::cout << "Insert phone number: " << std::endl;
	std::getline(std::cin, input);
	PhoneBook::contacts[_contactIndex].setPhoneNumber(input);
	std::cout << "The phone number you've inserted is " << PhoneBook::contacts[_contactIndex].getPhoneNumber() << std::endl;
	std::cout << "Insert dark secret: " << std::endl;
	std::getline(std::cin, input); 
	PhoneBook::contacts[_contactIndex].setDarkSecret(input);
	std::cout << "The dark secret you've inserted is " << PhoneBook::contacts[_contactIndex].getDarkSecret() << std::endl;
	if (_numOfContacts < 8)
		PhoneBook::_numOfContacts++;
	PhoneBook::_contactIndex++;
	if (_contactIndex > 7)
		_contactIndex = 0; 
	//std::cout << "contacts inserted = " << _contactIndex;
	return ;
}

void PhoneBook::Search ( void ) {
	std::string str;
	int	i = 0; 
	while (i < _numOfContacts)
	{
		std::cout << "|       " << i+1 << "|";
		str = PhoneBook::contacts[i].getFirstName();
		printField(str);
		str = PhoneBook::contacts[i].getLastName();
		printField(str);
		str = PhoneBook::contacts[i].getNickName();
		printField(str);
		std::cout << std::endl;
		i++;
	}
	
	std::cout << std::endl;
	return ;
}






#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"
#include <string>
#include <sstream>

int PhoneBook::_numOfContacts = 0;
int PhoneBook::_contactIndex = 0;

PhoneBook::PhoneBook( void ) {
}

PhoneBook::~PhoneBook( void ) {
}


void printField(std::string str)
{
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
}

void printHeader( void ) 
{
	std::cout << "_____________________________________" << std::endl;
	std::cout << "|        | First  |  Last  | Nick   |" << std::endl;
	std::cout << "| Index  |  Name  |  Name  | Name   |" << std::endl;
	std::cout << "|________|________|________|________|" << std::endl;

}

void PhoneBook::ShowContactDetails(int index)
{
	std::cout << "** CONTACT " << index + 1 << " DETAILS **" << std::endl;
	std::cout << "FIRST NAME -> " << PhoneBook::contacts[index].getFirstName() << std::endl;
	std::cout << "LAST NAME -> " << PhoneBook::contacts[index].getLastName() << std::endl;
	std::cout << "NICK NAME -> " << PhoneBook::contacts[index].getNickName() << std::endl;
	std::cout << "PHONE -> " << PhoneBook::contacts[index].getPhoneNumber() << std::endl;
	std::cout << "DARK SECRET -> " << PhoneBook::contacts[index].getDarkSecret() << std::endl;
}

void PhoneBook::Add ( void ) {
	std::string input;
	
	std::cout << "Insert first name: ";
	std::getline(std::cin, input);
	PhoneBook::contacts[_contactIndex].setFirstName(input);
	std::cout << "Insert last name: ";
	std::getline(std::cin, input);
	PhoneBook::contacts[_contactIndex].setLastName(input);
	std::cout << "Insert nickname: ";
	std::getline(std::cin, input); 
	PhoneBook::contacts[_contactIndex].setNickName(input);
	std::cout << "Insert phone number: ";
	std::getline(std::cin, input);
	PhoneBook::contacts[_contactIndex].setPhoneNumber(input);
	std::cout << "Insert dark secret: ";
	std::getline(std::cin, input); 
	PhoneBook::contacts[_contactIndex].setDarkSecret(input);
	if (_numOfContacts < 8)
		PhoneBook::_numOfContacts++;
	PhoneBook::_contactIndex++;
	if (_contactIndex > 7)
		_contactIndex = 0; 
	std::cout << "Number of contacts = " << _numOfContacts << std::endl;
	std::cout << "CONTACT ADDED TO PHONEBOOK!" << std::endl;
	return ;
}

void PhoneBook::Search ( void ) {
	std::string str;
	std::string strIndex;
	int index;
	int	i = 0; 
	if (_numOfContacts > 0)
		printHeader();
	while (i < _numOfContacts)
	{
		std::cout << "|       " << i+1 << "|";
		str = PhoneBook::contacts[i].getFirstName();
		printField(str);
		str = PhoneBook::contacts[i].getLastName();
		printField(str);
		str = PhoneBook::contacts[i].getNickName();
		printField(str);
		std::cout << "\n ‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾";
		i++;
	}
	std::cout << std::endl;
	std::cout << "Insert the index you wanna see in details: ";
	std::getline(std::cin, strIndex);
	std::istringstream ss(strIndex);
	
	if (ss >> index && index <= _numOfContacts)
		ShowContactDetails(index-1);
	else
		std::cout << "Index does not exist!" << std::endl;
	std::cout << "index = " << index << std::endl;
	std::cout << std::endl;
	return ;
}






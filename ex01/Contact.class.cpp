#include <iostream>
#include "Contact.class.hpp"

Contact::Contact( void ) 
{
	
}

Contact::~Contact( void ) 
{

}

void Contact::setFirstName(std::string _firstName) 
{
	this->_firstName = _firstName;
}

void Contact::setLastName(std::string _lastName)
{
	this->_lastName = _lastName;
}

void Contact::setNickName(std::string _nickName)
{
	this->_nickName = _nickName;
}


void Contact::setPhoneNumber(std::string _phoneNumber)
{
	this->_phoneNumber = _phoneNumber;
}

void Contact::setDarkSecret(std::string _darkSecret)
{
	this->_darkSecret = _darkSecret;
}

std::string Contact::getFirstName(void)
{
	return _firstName;
}
		
std::string Contact::getLastName(void)
{
	return _lastName;
}

std::string Contact::getNickName(void)
{
	return _nickName;
}
		
std::string Contact::getPhoneNumber(void)
{
	return _phoneNumber;
}
		
std::string Contact::getDarkSecret(void)
{
	return _darkSecret;
}






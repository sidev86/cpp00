#include <iostream>
#include <stdlib.h>
#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"

int	main(){
	
	PhoneBook pb;
	std::string command;
	std::string input;
	system("cls || clear");
	while(1)
	{
		
		std::cout << "               ** COOL SKETCHY PHONEBOOK **" << std::endl;
		std::cout << std::endl;
		std::cout << "COMMAND LIST:"<< std::endl;
		std::cout << "1. 'ADD' to insert a new contact in the address book" << std::endl;
		std::cout << "2. 'SEARCH' to search for a contact among existing ones" << std::endl;
		std::cout << "3. 'EXIT' terminate PhoneBook" << std::endl;	
		std::cout << "\nType the command you want to execute and press Enter: ";
		std::getline(std::cin, command);
		
		if (command.compare("ADD") == 0)
			pb.Add();	
		else if (command.compare("SEARCH") == 0)
			pb.Search();
		else
			std::cout << "Command not found" << std::endl;
	}
	return 0;
}

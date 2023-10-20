#include <iostream>
#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"

int	main(){
	
	PhoneBook pb;
	std::string command;
	while (1)
	{
		std::cout << "** COOL SKETCHY PHONEBOOK **" << std::endl;
		std::cout << std::endl;
		std::cout << "COMMAND LIST:"<< std::endl;
		std::cout << "1. 'ADD' to insert a new contact in the address book" << std::endl;
		std::cout << "2. 'SEARCH' to search for a contact among existing ones" << std::endl;
		std::cout << "3. 'EXIT' I'll let you guess what it does" << std::endl;	
		std::cin >> command;
		std::cout << "This is the command you've inserted: " << command << std::endl;
		if (command.compare("ADD") == 0)
			pb.Add();
		else if (command.compare("SEARCH") == 0)
			pb.Search();
		else
			std::cout << "Command not found" << std::endl;
	}
	return 0;
}


#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP
# include "Contact.class.hpp"

class PhoneBook
{
	public:
		Contact contacts[8];
		
		PhoneBook( void );
		~PhoneBook( void );	
		
		void Add( void );
		void Search( void ); 
		void Exit( void );
		void ShowContactDetails( int index ); 
	private:
		static int _numOfContacts;
		static int _contactIndex;	
};




#endif

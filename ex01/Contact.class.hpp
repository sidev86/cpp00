#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <string>

class Contact
{
	
	public:
		Contact( void );
		~Contact( void );
		
		void setFirstName(std::string _firstName);
		void setLastName(std::string _lastName);
		void setNickName(std::string _nickName);
		void setPhoneNumber(std::string _phoneNumber);
		void setDarkSecret(std::string _darkSecret);
		std::string getFirstName(void);
		std::string getLastName(void);
		std::string getNickName(void);
		std::string getPhoneNumber(void);
		std::string getDarkSecret(void);
	
	private:
		std::string _firstName;
		std::string _lastName;
		std::string _phoneNumber;
		std::string _nickName;
		std::string _darkSecret;	
};


#endif

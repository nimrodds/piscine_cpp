#include "PhoneBook.hpp"

int	main(int argc, char **argv)
{
	class PhoneBook Alcatel;
	std::string name;

	while (1)
	{
		std::cout << "PhoneBook: ";
		std::getline (std::cin,name);
		if (name.compare("EXIT") == 0)
			break;
		if (name.compare("ADD") == 0)
		{
			std::cout << "Adding Contact\n";	
			Alcatel.AddContact(Alcatel.GetContactInfos());
		}
		if (name.compare("SEARCH") == 0)
		{
			std::cout << "Searching contact\n";
			Alcatel.SearchContact();
		}
	}
	return (0);
}

// int main ()
// {
//   std::string name;

//   std::cout << "Please, enter your full name: ";
//   std::getline (std::cin,name);
//   std::cout << "Hello, " << name << "!\n";

//   return 0;
// }
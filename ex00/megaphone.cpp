#include <iostream>

void megaphoneString(char *str)
{
	int	i; 
	char	c;

	i = 0; 
	while (str[i])
	{
		c = std::toupper(str[i++]);
		std::cout << c;
	}

}
int	main(int argc, char **argv)
{
	int	i; 

	i = 1; 
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (i < argc)
		{
			megaphoneString(argv[i]);
			i++;
		}
		std::cout << std::endl;
	}
}

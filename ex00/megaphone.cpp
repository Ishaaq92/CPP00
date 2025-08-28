#include <iostream>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	if (ac != 2)
		return (std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl, 0);
	while (av[++i] != NULL)
	{
		j = -1;
		while (av[i][++j] != '\0')
		{
			if (av[i][j] >= 'a' && av[i][j] <= 'z')
				std::cout << ((char) (av[i][j] - 32));
			else
				std::cout << av[i][j];
		}
	}
	std::cout << std::endl;
	return (0);
}

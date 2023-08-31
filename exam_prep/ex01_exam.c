#include <unistd.h>

void	ft_print_alphabet(void)
{
	write(1, "abcdeghijklmnopqrstuvwxyz", 26);
}

int	main(void)
{
	ft_print_alphabet();
	return (0);
}
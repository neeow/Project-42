/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mshegow <mshegow@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/24 17:36:41 by mshegow       #+#    #+#                 */
/*   Updated: 2023/08/31 20:25:20 by nchan         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	check(int *nb)
{
	if (*nb < 0)
	{
		write(1, "-", 1);
		*nb = -(*nb);
	}
	if (*nb == 0)
	{
		write(1, "0", 1);
	}
}

void	ft_putnbr(int nb)
{
	char	array[100];
	int		length;

	length = 0;
	check(&nb);
	while (nb > 0)
	{
		array[length] = '0' + (nb % 10);
		nb /= 10;
		length++;
	}
	while (length > 0)
	{
		length--;
		write(1, &array[length], 1);
	}
}

int	main(void)
{
	ft_putnbr(-2147483647);
	return (0);
}

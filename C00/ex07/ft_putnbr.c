/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nchan <nchan@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/04 12:08:46 by nchan         #+#    #+#                 */
/*   Updated: 2023/09/04 12:08:48 by nchan         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nb < 0) 
		{
			ft_putchar ('-');
			nb = -nb;
		}
		if (nb >= 10)
		{
			ft_putnbr (nb / 10);
			ft_putnbr (nb % 10);
		}
		else
			ft_putchar(nb + '0');
	}
}


int main(void)
{
    int nb;

    nb = 123114;

    ft_putnbr(nb);
    ft_putchar ('\n');
    return(0);
}

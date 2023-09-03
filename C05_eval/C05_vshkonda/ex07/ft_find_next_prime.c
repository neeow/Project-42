/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_find_next_prime.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: vshkonda <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/31 17:34:54 by vshkonda      #+#    #+#                 */
/*   Updated: 2023/08/31 18:27:18 by nchan         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (2);
	while (i <= nb / i)
	{
		if (nb % i == 0)
		{
			nb++;
		}
		i++;
	}
	return (nb);
}


int main(void)
{
    printf("%d\n", ft_find_next_prime(10));
    return(0);
}

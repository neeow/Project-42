/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_iterative_power.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: vshkonda <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/31 17:11:25 by vshkonda      #+#    #+#                 */
/*   Updated: 2023/08/31 18:24:16 by nchan         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power == 0)
		result = 1;
	if (power < 0)
		result = 0;
	if (power == 1)
		result = nb;
	while (power > 1)
	{
		result *= nb;
		power --;
	}
	return (result);
}

int main (void)
{
    printf("%d\n", ft_iterative_power(2, 11));
    return(0);
}

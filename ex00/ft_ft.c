/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ft.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: nchan <nchan@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/22 12:42:10 by nchan         #+#    #+#                 */
/*   Updated: 2023/08/24 15:48:06 by nchan         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main(void)
{
	int	*nbr;
	int	number;

	nbr = &number;
	ft_ft(nbr);
	printf("%d", number);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sqrt.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: vshkonda <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/31 17:32:07 by vshkonda      #+#    #+#                 */
/*   Updated: 2023/08/31 18:26:07 by nchan         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	a;

	a = 0;
	while (a * a < nb)
		a++;
	if (a * a == nb)
		return (a);
	else
		return (0);
}


int	main(void)
{
    printf("%d\n", ft_sqrt(16));
    return(0);
}

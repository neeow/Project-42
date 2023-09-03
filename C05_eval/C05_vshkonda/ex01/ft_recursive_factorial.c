/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_recursive_factorial.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: vshkonda <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/31 17:09:57 by vshkonda      #+#    #+#                 */
/*   Updated: 2023/08/31 18:23:52 by nchan         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb > 0)
		return (nb * ft_recursive_factorial(nb - 1));
	else
		return (1);
}


int main(void)
{
    printf("%d\n", ft_recursive_factorial(5));
    return(0);
}

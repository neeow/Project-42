/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_printable.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: nchan <nchan@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/31 17:46:51 by nchan         #+#    #+#                 */
/*   Updated: 2023/08/31 17:49:33 by nchan         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 32 || str [i] > 126))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	printf("%d", ft_str_is_printable("abc"));
	printf("\n%d", ft_str_is_printable("€"));
	printf("\n%d", ft_str_is_printable("\n"));
}
*/

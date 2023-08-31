/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlowcase.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nchan <nchan@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/31 19:40:22 by nchan         #+#    #+#                 */
/*   Updated: 2023/08/31 19:51:46 by nchan         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str [i] <= 'Z'))
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
/*
int main(void)
{
	char str[] = "ABC";
	printf("%s", ft_strlowcase(str));
}
*/
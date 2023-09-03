/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mshegow <mshegow@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/24 16:16:27 by mshegow       #+#    #+#                 */
/*   Updated: 2023/08/31 20:23:47 by nchan         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen( char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

int	main(void)
{
	char	input[] = "Hello, World!";
	int		result = ft_strlen(input);

	printf("Length of the string: %d\n", result);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nchan <nchan@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/03 17:40:07 by nchan         #+#    #+#                 */
/*   Updated: 2023/09/05 21:12:53 by nchan         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	dest_i;

	i = 0;
	dest_i = 0;
	while (dest[dest_i] != '\0')
	{
		dest_i++;
	}
	while (i < nb && src[i] != '\0')
	{
		dest[dest_i] = src[i];
		dest_i++;
		i++;
	}
	dest[dest_i] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char destination[20] = "Hello, ";
// 	char source[] = "Codam!";

// 	strncat(destination, source, 3);
// 	// ft_strncat(destination, source, 3);
// 	printf("Concatenated string: %s\n", destination);
// 	return (0);}
//
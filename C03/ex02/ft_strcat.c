/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcat.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nchan <nchan@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/03 17:40:15 by nchan         #+#    #+#                 */
/*   Updated: 2023/09/05 21:17:39 by nchan         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	dest_i;

	i = 0;
	dest_i = 0;
	while (dest[dest_i] != '\0')
	{
		dest_i++;
	}
	while (src[i] != '\0')
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
// 	char destination[9] = "hello, ";
// 	char source[] = "codam!";
// strcat(destination, source);
// 	ft_strcat(destination, source);
// 	printf("Concatenated string: %s\n", destination);
// 	return (0);
// }
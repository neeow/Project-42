/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nchan <nchan@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/05 15:48:33 by nchan         #+#    #+#                 */
/*   Updated: 2023/09/05 21:20:21 by nchan         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

unsigned int	length( char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

char	ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	dest_i;

	i = 0;
	dest_i = 0;
	while (dest[dest_i] != '\0')
	{
		dest_i++;
	}
	while (i < nb)
	{
		dest[dest_i] = src[i];
		dest_i++;
		i++;
	}
	dest[dest_i] = '\0';
	return (*dest);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len ;
	unsigned int	remaining_space;

	dest_len = length(dest);
	src_len = length(src);
	if (size <= dest_len)
	{
		return (size + src_len);
	}
	remaining_space = size - dest_len - 1;
	if (src_len < remaining_space)
	{
		ft_strncat(dest + dest_len, src, src_len);
	}
	else
	{
		ft_strncat(dest + dest_len, src, remaining_space);
	}
	return (dest_len + src_len);
}

// int	main(void)
// {
// 	int		result;
// 	char*	src;

// 	char dest[50] = "Welcome, ";

// 	src = "testing this code!";
// 	// result = ft_strlcat(dest, src, 27);
// 	// result = strlcat(dest, src, 27);
// 	printf("%d", result);
// 	return (0);
// }
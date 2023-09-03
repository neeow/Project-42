/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcat.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nchan <nchan@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/03 17:40:15 by nchan         #+#    #+#                 */
/*   Updated: 2023/09/03 17:40:16 by nchan         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[c] != '\0')
	{
		dest[i] = src [c];
		i++;
		c++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main()
{
	char dest[] = "42 ";
	char src[] = "Codam";
	printf("%s", ft_strcat(dest, src));
}

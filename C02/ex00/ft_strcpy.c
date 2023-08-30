/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nchan <nchan@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/29 14:27:11 by nchan         #+#    #+#                 */
/*   Updated: 2023/08/29 18:42:23 by nchan         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void    *ft_strcpy(char *dest, char *src)
{
	int        i;

	i = 0;
	while (src[i] != '\0')
	{
		src[i] = dest[i];
		i++;
	}
	return (dest);
}

int        main(void)
{
	char string[10] = "Helloguys";
	char string2[10];
	char *ptr;
	char *ptr2;

	ptr = string;
	ptr2 = string2;
	printf("%d", ft_strcpy(ptr, ptr2));
}

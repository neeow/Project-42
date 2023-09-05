/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nchan <nchan@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/04 15:29:40 by nchan         #+#    #+#                 */
/*   Updated: 2023/09/05 21:21:10 by nchan         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// int	main(void)
// {
// 	char *str1
// 	="hsgi";
// 	char *str2 = "htee!";

// 	int result = ft_strcmp(str1, str2);
// 	// int result = strcmp(str1, str2);
// 	if (result < 0)
// 	{
// 		printf("%d", result);
// 	} else if (result > 0) {
// 		printf("%d", result);
// 	} else {
// 		printf("%d", result);
// 	}

// 	return (0);
// 	}
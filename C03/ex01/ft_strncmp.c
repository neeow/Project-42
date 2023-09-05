/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nchan <nchan@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/04 15:29:52 by nchan         #+#    #+#                 */
/*   Updated: 2023/09/05 21:21:04 by nchan         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char *str1 ="12314341423";
// 	char *str2 = "3453453423";

//  	int	result = ft_strncmp(str1, str2, 5);
// 	int	result1 = strncmp(str1, str2, 5);

// 	if (result < 0)
// 	{
// 		printf("%d %d", result, result1);
// 	}
// 	else if (result > 0)
// 	{
// 		printf("%d %d", result, result1);
// 	}
// 	else
// 	{
// 		printf("%d %d", result, result1);
// 	}
// 	return (0);
// }
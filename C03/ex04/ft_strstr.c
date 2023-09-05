/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nchan <nchan@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/05 13:26:08 by nchan         #+#    #+#                 */
/*   Updated: 2023/09/05 13:28:44 by nchan         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	str_length(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	tf_l;

	tf_l = str_length(to_find);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (j < tf_l && str[i + j] == to_find[j])
		{
			j++;
		}
		if (j == tf_l)
		{
			return (str + i);
		}
		i++;
	}
	return (0);
}

/*
int	main()
{
	char str[] = "begin from start";
	char find[] = "from";
	printf("%s", ft_strstr(str, find));
}
*/
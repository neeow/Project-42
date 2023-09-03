/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mshegow <mshegow@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/24 17:12:53 by mshegow       #+#    #+#                 */
/*   Updated: 2023/08/28 15:05:25 by mshegow       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

// int	main(void)
// {
// 	char	str[8];
// 	char	result;

// 	str[0] = 'A';
// 	str[1] = 'm';
// 	str[2] = 's';
// 	str[3] = 't';
// 	str[4] = 'e';
// 	str[5] = 'r';
// 	str[6] = 'd';
// 	str[7] = 'a';
// 	str[8] = 'm';
// 	ft_putstr(str);
// 	return (0);
// }

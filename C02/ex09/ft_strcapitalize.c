/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcapitalize.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: nchan <nchan@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/01 13:29:21 by nchan         #+#    #+#                 */
/*   Updated: 2023/09/03 15:59:21 by nchan         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	capital;

	i = 0;
	capital = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 48 && str[i] <= 57) || \
				(str[i] >= 65 && str[i] <= 90) || \
				(str[i] >= 97 && str[i] <= 122))
		{
			if (capital == 1 && (str[i] >= 97 && str[i] <= 122))
				str[i] = str[i] - 32;
			else if (capital == 0 && (str[i] >= 65 && str[i] <= 90))
				str[i] = str[i] + 32;
			capital = 0;
		}
		else
			capital = 1;
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	test3[] = "heLlo thEre! tHis is a tesT";
	char	test6[15] = "quarante-deux;";
	char	test7[7] = "42mots";
	char	test4[14] = "Good moRning!";
	char	test5[16] = "qinquante+et+un";
	char	test2[15] = "comment sa va";
	char	test1[14] = "Hello World";

	ft_strcapitalize(test5);
	ft_strcapitalize(test6);
	ft_strcapitalize(test7);
	ft_strcapitalize(test3);
	ft_strcapitalize(test4);
	ft_strcapitalize(test2);
	ft_strcapitalize(test1);

	printf("result: \"%s\"	\n", test6);
	printf("result: \"%s\"	\n", test7);
	printf("result: \"%s\"	\n", test5);
	printf("result: \"%s\"	\n", test3);
	printf("result: \"%s\"	\n", test4);
	printf("result: \"%s\"	\n", test2);
	printf("result: \"%s\"	\n", test1);
	return (0);
}
*/

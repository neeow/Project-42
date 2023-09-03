/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mshegow <mshegow@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/28 11:34:24 by mshegow       #+#    #+#                 */
/*   Updated: 2023/08/30 14:38:42 by mshegow       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>

int	isspace(int c)
{
	if (c == ' ' || c == '\t' || c == '\n'
		|| c == '\r' || c == '\f' || c == '\v')
	{
		return (1);
	}
	return (0);
}

int	check(int c)
{
	if ((c >= '0') && (c <= '9'))
	{
		return (1);
	}
	return (0);
}

int	parse_sign(char *str, int *i)
{
	int	sign;

	sign = 1;
	if (str[*i] == '-')
	{
		sign = -1;
		(*i)++;
	}
	else if (str[*i] == '+')
	{
		(*i)++;
	}
	return (sign);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	results;

	sign = 0;
	i = 0;
	results = 0;
	while (isspace(str[i]))
	{
		i++;
	}
	sign = parse_sign(str, &i);
	while (check(str[i]))
	{
		results = results * 10 + (str[i] - '0');
		i++;
	}
	return (sign * results);
}

// int	main(void)
// {
// 	char *input = "  -42 some random text";
// 	int result = ft_atoi(input);
// int result = ft_atoi(input);
// 	printf("The converted integer is: %d\n", result);
// 	return (0);
// }

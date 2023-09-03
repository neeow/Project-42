/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: vshkonda <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/01 13:08:49 by vshkonda      #+#    #+#                 */
/*   Updated: 2023/09/02 13:49:02 by nchan         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	resulter(int ind, char *str)
{
	int	result;

	result = 0;
	while (str[ind] >= '0' && str[ind] <= '9')
	{
		result = result + (str[ind] - '0');
		if (str[ind + 1] >= '0' && str[ind + 1] <= '9')
			result *= 10;
		ind++;
	}
	return (result);
}

int	ft_atoi(char *str)
{
	int	ind;
	int	min;
	int	result;

	ind = 0;
	result = 0;
	min = 0;
	while (str[ind] != '\0') 
	{
		if (str[ind] == '-')
			min++;
		if (str[ind] >= '0' && str[ind] <= '9')
		{
			result = resulter (ind, str);
			break ;
		}
		ind++;
	}
	if (min % 2 != 0)
		result = -result;
	return (result);
}


int main(void)
{
    char *str;

    str = "   ---+--+1234ab567";
    
    printf("%d\n", ft_atoi(str));
    return(0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: vshkonda <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/01 13:02:13 by vshkonda      #+#    #+#                 */
/*   Updated: 2023/09/02 13:47:23 by nchan         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	ind;

	ind = 0;
	while (str[ind] != '\0')
	{
		ind++;
	}
	return (ind);
}

int main(void)
{
    printf("%d\n", ft_strlen("hello"));
    return(0);
}

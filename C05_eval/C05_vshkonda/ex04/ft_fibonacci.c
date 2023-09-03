/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_fibonacci.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: vshkonda <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/31 17:15:17 by vshkonda      #+#    #+#                 */
/*   Updated: 2023/08/31 18:25:14 by nchan         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	char	*seq;
	int		result;

	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

int main(void)
{
    printf("%d\n", ft_fibonacci(15));
    return(0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: vshkonda <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/01 13:04:32 by vshkonda      #+#    #+#                 */
/*   Updated: 2023/09/02 13:48:02 by nchan         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	ind;

	ind = 0;
	while (str[ind] != '\0')
	{
		write (1, &str[ind], 1);
		ind++;
	}
}

int main(void)
{
    ft_putstr("print\n");
    return(0);
}
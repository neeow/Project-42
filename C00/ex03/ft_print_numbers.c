/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_numbers.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: nchan <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/22 16:40:05 by nchan         #+#    #+#                 */
/*   Updated: 2023/08/22 19:10:12 by nchan         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_print_numbers(void)
{
	write(1, "0123456789", 10);
}
/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sort_int_tab.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: nchan <nchan@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/29 13:20:01 by nchan         #+#    #+#                 */
/*   Updated: 2023/08/29 18:14:30 by nchan         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	while (size >= 0)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				swap = tab [i];
				tab[i] = tab [i + 1];
				tab [i + 1] = swap;
			}
			i++;
		}
		size--;
	}
}
/*
int    main(void)
{
    int    tab[6] = {7, 6, 3, 4, 2, 5};
    int    size = 6;

    ft_sort_int_tab(tab, size);
    printf("%d, %d, %d, %d, %d, %d", 
	tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]); 
    return (0);
}    
*/
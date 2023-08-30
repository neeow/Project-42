/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_rev_int_tab.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: nchan <nchan@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/29 13:19:43 by nchan         #+#    #+#                 */
/*   Updated: 2023/08/30 18:17:19 by nchan         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	start;
	int	end;

	end = size - 1;
	start = 0;
	while (start < end)
	{
		temp = tab[start];
		tab[start] = tab[end];
		tab[end] = temp;
		start++;
		end--;
	}
}
/*
int main()
{
	int arr[] = {1, 2, 3, 4, 5};
	int size = sizeof(arr) / sizeof(arr[0]);
	printf("original array: ");
	for (int i = 0; i < size; i++)
	{
		printf("%d", arr[i]);
	}
	ft_rev_int_tab(arr, size);
	printf("\nReversed array: ");
	for (int i = 0; i < size; i++)
	{
	printf("%d", arr[i]);
	}
	return (0);
}
*/
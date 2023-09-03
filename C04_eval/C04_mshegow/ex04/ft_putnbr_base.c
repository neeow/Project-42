/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_base.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: mshegow <mshegow@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/28 12:46:47 by mshegow       #+#    #+#                 */
/*   Updated: 2023/08/31 14:04:38 by mshegow       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	verify_input(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (!base || base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-'
			|| (base[i] >= 9 && base[i] <= 13)
			|| base[i] == ' ')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	strlen( char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

void	reverse_and_print(char *str, int length)
{
	int	i;

	i = length - 1;
	while (i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_len;
	char	result[32];
	int		digit_count;

	if (!verify_input(base))
		return ;
	base_len = strlen(base);
	digit_count = 0;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	if (nbr == 0)
	{
		write(1, &base[0], 1);
		return ;
	}
	while (nbr > 0)
	{
		result[digit_count++] = base[nbr % base_len];
		nbr /= base_len;
	}
	reverse_and_print(result, digit_count);
}

// int	main(void)
// {
// 	// ft_putnbr_base(16, "010"); // Display 42 in binary
// 	// ft_putnbr_base(255, "0123456789ABCDEF");  // Display 255 in hexadecimal
// 	// ft_putnbr_base(-10, "poneyvif");  // Display -10 in octal
// 	return (0);
// }

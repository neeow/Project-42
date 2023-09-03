/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi_base.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: mshegow <mshegow@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/30 13:43:01 by mshegow       #+#    #+#                 */
/*   Updated: 2023/08/31 13:51:20 by mshegow       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	is_valid_base(char *base)
{
	int	base_len;
	int	j;

	if (!base || !*base || base[1] == '\0')
		return (0);
	base_len = 0;
	while (base[base_len])
	{
		if (base[base_len] == '-' || base[base_len] == '+'
			|| base[base_len] == ' ' || base[base_len] < 32)
			return (0);
		j = base_len + 1;
		while (base[j])
		{
			if (base[j] == base[base_len])
			{
				return (0);
			}
			j++;
		}
		base_len++;
	}
	return (1);
}

int	char_to_digit(char c, char *base)
{
	int	base_len;

	base_len = 0;
	while (base[base_len])
	{
		if (c == base[base_len])
		{
			return (base_len);
		}
		base_len++;
	}
	return (-1);
}

int	str_to_int(char *str, char *base, int base_len)
{
	int	result;
	int	sign;
	int	digit;

	sign = 1;
	result = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
	{
		str++;
	}
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while (*str != '\0')
	{
		digit = char_to_digit(*str, base);
		if (digit == -1)
			return (0);
		result = result * base_len + digit;
		str++;
	}
	return (result * sign);
}

int	ft_atoi_base(char *str, char *base)
{
	int	base_len;

	if (!is_valid_base(base))
	{
		return (0);
	}
	base_len = 0;
	while (base[base_len])
	{
		base_len++;
	}
	return (str_to_int(str, base, base_len));
}

// int main() {
// 	char str[] = "1010";
// 	char base[] = "01";
// 	int result = ft_atoi_base(str, base);
// 	printf("Result: %d\n", result);
// 	return (0);
// }

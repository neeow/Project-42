// #include <stdio.h>

// char	*ft_strcat(char *dest, char *src, unsigned int)
// {
// 	unsigned int	i;
// 	unsigned int	c;

// 	i = 0;
// 	while (dest[i] != '\0')
// 	{
// 		i++;
// 	}
// 	c = 0;
// 	while (src[c] != '\0')
// 	{
// 		dest[i] = src [c];
// 		i++;
// 		c++;
// 	}
// 	dest[i] = '\0';
// 	return (dest);
// }

// int	main()
// {
// 	char src[] = "Codam";
// 	char dest[] = "42 ";
// 	printf("%s", ft_strcat(dest, src));
// }


#include <unistd.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[c] != '\0' && nb > 0)
	{
		dest[i] = src[c];
		i++;
		c++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main()
{
	char dest[] = "42 ";
	char src[] = "Network";
	printf("%s", ft_strncat(dest, src, 7));
}
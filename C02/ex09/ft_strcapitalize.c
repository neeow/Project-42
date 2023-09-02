/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcapitalize.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: nchan <nchan@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/01 13:29:21 by nchan         #+#    #+#                 */
/*   Updated: 2023/09/02 15:53:43 by nchan         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strcapitalize(char *str)
{
    int    i;

    i = 1;
    if (str[0] >= 97 && str[0] <= 122)
    {
        str[0] -= 32;
    }
    while (str[i] != '\0')
    {
        if ((str[i] >= 97 && str[i] <= 122) && (str[i - 1] >= 32 && 
                str[i - 1] <= 46))
        {
            str[i] -= 32;
            i++;
        }
        else
        {
            i++;
        }
    }
    return (str);
}
/*
int    main(void)
{
    char    string[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un\n";
    printf("%s", ft_strcapitalize(string));
}
*/
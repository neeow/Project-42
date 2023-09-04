/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nchan <nchan@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/04 15:29:52 by nchan         #+#    #+#                 */
/*   Updated: 2023/09/04 16:08:45 by nchan         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int    ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int i;
    int res;

    i = 0;
    while(i < n && s1[i] != '\0')
    {
        if(s1[i] - s2[i] != 0)
        {
            res = s1[i] - s2[i];
            return(res);
        }
        i++;
    }
    return(0);
}
/*
int    main(void)
{
    char str1[] = "bla bla";
    char str2[] = "bla bloe";
    printf("%d\n", ft_strncmp(str1, str2, 6));
    printf("%d\n", ft_strncmp(str1, str2, 7));
}
*/
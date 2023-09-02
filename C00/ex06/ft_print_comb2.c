#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_combinations(char a, char b, char y, char z)
{
    ft_putchar(a); //prints the first digit of the number
    ft_putchar(b); //prints the second digit of the number
    ft_putchar(' '); //prints a space
    ft_putchar(y); //prints the third digit of the number
    ft_putchar(z); //prints the fourth digit of the number
    if (a == '9' && b == '8' && y == '9' && z == '9')
    {
        return ; //if the numbers are 98 and 99, return from function (end)
    }
    else
    {
        ft_putchar(','); //prints a comma if the numbers are not 98 and 99
        ft_putchar(' '); //prints a space if the numbers are not 98 and 99
    }
}

void    ft_check_last_two_numbers(char a, char b) //this function generates and prints combinations for the last two digits of a number
{
    char    y;
    char    z;

    y = a;
    while (y <= '9')
    {
        if (y == a)
        {
            z = b + 1; //start z from b + 1
        }
        else
        {
            z = '0'; //if y is not equal to a, start z from '0'
        }
        while (z <= '9')
        {
            ft_print_combinations(a, b, y, z); //print the combination
            z++;
        }
        y++;
    }
}

void    ft_print_comb2(void)//this function generates and prints all possible combinations of two-digit numbers
{
    char    a;
    char    b;

    a = '0';
    while (a <= '9')
    {
        b = '0';
        while (b <= '9')
        {
            ft_check_last_two_numbers(a, b); //generate combinations for the last two digits
            b++;
        }
        a++;
    }
}

int    main(void)
{
    ft_print_comb2(); //calls the function to print all combinations
    return (0); //return 0 to indicate successful completion
}
//expected output: 00 01 ... 98 99
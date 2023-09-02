#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_number(char a, char b, char c)
{
    ft_putchar(a); //prints first character
    ft_putchar(b); //prints second character
    ft_putchar(c); //prints third character
    if (a != '7' || b != '8' || c != '9') //'!' is the logical NOT operator, in tis case it says 'a' is NOT equal to '7'. 
        //this row checks if the current combination is not hte last one (789)
    {
        ft_putchar(','); //prints a comma
        ft_putchar(' '); //prints a space
    }
}

void    ft_print_comb(void)
{
    char    a;
    char    b;
    char    c;

    a = '0'; //first number called '0'
    while (a <= '7') //if <= '7' ↴
    {
        b = a + 1; //add one to first(a) number
        while (b <= '8') //if b <= '8' ↴
        {
            c = b + 1; //add one to second(b) number
            while (c <= '9')
            {
                ft_print_number(a, b, c); //print combination
                c++;
            }
            b++;
        }
        a++;
    }
}

int    main(void)
{
    ft_print_comb(); //call function to print
    return (0);
}
//expected output: 012, 013, 014, 015, 016, 017, 018, 019, 023, 024, 025, 026, 027, 028, 029, 034, 035, 036, 037, 038, 039, 045,
//046, 047, 048, 049, 056, 057, 058, 059, 067, 068, 069, 078, 079, 089, 123, 124, 125, 126, 127, 128, 129, 134, 135, 136, 137, 
//138, 139, 145, 146, 147, 148, 149, 156, 157, 158, 159, 167, 168, 169, 178, 179, 189, 234, 235, 236, 237, 238, 239, 245, 246, 
//247, 248, 249, 256, 257, 258, 259, 267, 268, 269, 278, 279, 289, 345, 346, 347, 348, 349, 356, 357, 358, 359, 367, 368, 369, 
//378, 379, 389, 456, 457, 458, 459, 467, 468, 469, 478, 479, 489, 567, 568, 569, 578, 579, 589, 678, 679, 689, 789%
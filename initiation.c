#include <unistd.h>

void initialize (char* str, int row, int col, int arr[4][4])
{
    int ind;
    int x;
    int y;

    ind = 0;
    x = 0;
   
    while (x < 4)
    {
        y = 0;
        while (y < 4)
        {
            if (col == 4)
            {
                col = 0;
                row++;
            }
            arr [row][col] = str[ind] - '0';
            col++;
            ind++;
            y++;
        }
        x++;
    }
}



int input_valid(char *str, int row, int col, int arr[4][4])
{
    while (*str != '\0')
    {
        if (*str >= '1' && *str <= '4')
            initialize(str, row, col, arr);
        else if (*str == ' ')
            str++;
        else
        {
            write(1, "Error", 5);
            return (1);
        }
    }
    if (*str >= 32)
    {
        write(1, "Error", 5);
        return (1);
    }
    return (0);
}
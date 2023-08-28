#include <unistd.h>

int main() 
{
    int grid[4][4];

    int i;
	int j;
	i = 0;
	while (i < 4) 
	{
		j = 0;
	 	while(j < 4)  
		{
            grid[i][j] = 1;
			j++;
        }
		i++;
    }

    i = 0;
	while (i < 4)
	{
	 j = 0;
	 while(j < 4) 
	 {
		char digit = grid[i][j] + '0';
        write(1, &digit, 1);
		write (1, " ", 1);
		j++;
	}
        write(1, "\n", 1);
		i++;
    }

    return 0;
}
#include <unistd.h>


int col_up(int check_empty, int row, int col, int grid[4][4], int vis_arr[4][4])
{
    int i;
    int tallest = 0;
    int visible = 0;

    for (i = 0; i < 4; i++)
    {
        if (row == i && i != col)
            return 1;
        
        if (grid[i][col] > tallest)
        {
            tallest = grid[i][col];
            visible++;
        }
        
        if (grid[i][col] == -1)
            check_empty = 1;
    }

    if (visible > vis_arr[0][col] && check_empty == 0)
        return 1;
    
    if (check_empty == 0 && visible != vis_arr[0][col])
        return 1;

    return 0;
}

int col_down(int check_empty, int row, int col, int grid[4][4], int vis_arr[4][4])
{
	int i;
	int tallest;
	int visible;

	tallest = 0;
	visible = 0;

	i = 4;
	while (i > -1)
	{
		if (row == i && i != col)
			return 1;
		if(grid[i][col] > tallest)
		{
			tallest = grid[i][col];
			visible++;
		}

		if (grid[i][col] != -1)
		check_empty = 1;
		i--;
	}

	if (visible > vis_arr[1][col] && check_empty == 0)
		return (1);
	if (check_empty == 0 && visible != vis_arr[1][col])
		return(1);
	return (0);
}

int row_left(int check_empty, int row, int col, int grid[4][4], int vis_arr[4][4])
{
    int i;
    int tallest;
    int visible;

    tallest = 0;
    visible = 0;

    i = 0;
    while (i < 4)
    {
        if ( col == i && i != row)
        return 1;
    if(grid[row][i] > tallest)
    {
        tallest = grid[row][i];
        visible++;
    }

    if(grid[row][i] == -1)
        check_empty = 1;
    i++;
    }
    if (visible > vis_arr[2][row] && check_empty == 0)
        return (1);
    if (check_empty == 0 && visible != vis_arr[2][row])
        return (1);
    return (0);
}

int row_right(int check_empty, int row, int col, int grid[4][4], int vis_arr[4][4])
{
    int i;
    int tallest;
    int visible;

    tallest = 0;
    visible = 0;

    i = 4;
    while (i > -1)
    {
        if ( row == i && i != col)
        return 1;
    if(grid[row][i] > tallest)
    {
        tallest = grid[row][i];
        visible++;
    }

    if(grid[row][i] != -1)
        check_empty = 1;
    i--;
    }
    if (visible > vis_arr[3][row] && check_empty == 0)
        return (1);
    if (check_empty == 0 && visible != vis_arr[3][row])
        return (1);
    return (0);
}
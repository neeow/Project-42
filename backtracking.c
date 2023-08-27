int col_up(int check_empty, int row, int col, int grid[4][4], int vis_arr[4][4]);
int col_down(int check_empty, int row, int col, int grid[4][4], int vis_arr[4][4]);
int row_left(int check_empty, int row, int col, int grid[4][4], int vis_arr[4][4]);
int row_right(int check_empty, int row, int col, int grid[4][4], int vis_arr[4][4]);

int	is_valid_placement(int grid[4][4], int vis_arr[4][4], int row, int col, int height)
{
	grid[row][col] = height;
	if (col_up(0, row, col, grid, vis_arr) == 1)
		return (1);
	if (col_down(0, row, col, grid, vis_arr) == 1)
		return (1);
	if (row_left(0, row, col, grid, vis_arr) == 1)
		return (1);
	if (row_right(0, row, col, grid, vis_arr) == 1)
		return (1);
	return (0);
}

int solve_backtrack(int grid[4][4], int row, int col, int height, int vis_arr[4][4])
{
    if (row == 4) {
        row = 0;
        col++;
        if (col == 4) {
            if (is_valid_placement(grid, row, col, height, vis_arr)) {
                return 1;
            }
            return 0;
        }
    }

    for (int height = 1; height <= 4; height++) {
        if (is_valid_placement(grid, row, col, height, vis_arr)) {
            grid[row][col] = height;
            if (solve_backtrack(grid, row + 1, col, vis_arr)) {
                return 1; 
            }
            grid[row][col] = 0;
        }
    }
    return 0;
}

int solve_puzzle(int grid[4][4])
{
    if (solve_backtrack(grid, 0, 0)) {
        return 1;
    }
    return 0; 
}
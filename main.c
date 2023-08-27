#include <stdio.h>
#include <unistd.h>

int is_valid_placement (int grid[4][4], int row, int col, int height, int vis_arr[4][4]);
int solve_puzzle(int grid[4][4]);
int input_valid(char *str, int row, int col, int arr[4][4]);


int main() {
    int grid[4][4] = {{0}}; // Initialize the grid with zeros
    
    // Initialize the grid using user input
    char input[32];
    if (read(0, input, sizeof(input)) < 0) {
        write(1, "Error reading input\n", 20);
        return 1;
    }

    if (input_valid(input, 0, 0, grid)) {
        write(1, "Invalid input\n", 15);
        return 1;
    }

    // Solve the puzzle using backtracking
    if (solve_puzzle(grid)) {
        // Print the solution
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                printf("%d ", grid[i][j]);
            }
            printf("\n");
        }
    } else {
        write(1, "No solution found\n", 18);
    }

    return 0;
}
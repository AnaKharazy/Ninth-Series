
#include <stdio.h>

#define N_ROWS 8
#define N_COLS 8
#define FOUND 0
#define DEAD_END 1
#define PATH '-'
#define FILLED 'X'
#define EMPTY '.'

int find_path(char[][N_COLS], int, int);
int start_maze(char[][N_COLS], int, int);

void main() {
    char grid[N_ROWS][N_COLS];
    int x, y, done;

    printf("\nEnter an %dX%d array that represents a maze:", N_ROWS, N_COLS);
    printf("\nEnter a '%c' for a filled square, and a '%c' for blank:", FILLED, EMPTY);
    for (y = 0; y <= N_ROWS - 1; y++) {
        printf("Input row number %d: ", y);
        scanf("%s", grid[y]);
    }

    for (y = 0; y <= N_ROWS - 1; y++) {
        for (x = 0; x <= N_COLS - 1; x++)
            printf("%c", grid[y][x]);
        printf("\n");
    }
}

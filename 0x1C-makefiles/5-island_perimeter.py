#!/usr/bin/python3
"""
script to get island's perimeter
"""


def island_perimeter(grid):
    """ Function returns the perimeter of island in grid """
    perimeter = 0

    rowsno = len(grid)

    if grid != []:
        columnsno = len(grid[0])

    for a in range(rowsno):
        for b in range(columnsno):
            if grid[a][b] == 1:
                if (a - 1) == -1 or grid[a - 1][b] == 0:
                    perimeter += 1
                if (a + 1) == rowsno or grid[a + 1][b] == 0:
                    perimeter += 1
                if (b - 1) == -1 or grid[a][b - 1] == 0:
                    perimeter += 1
                if (b + 1) == columnsno or grid[a][b + 1] == 0:
                    perimeter += 1

    return perimeter

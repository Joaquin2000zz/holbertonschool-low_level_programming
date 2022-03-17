#!/usr/bin/python3
"""
island_perimeter module
"""
def island_perimeter(grid):
    """
    function that that returns the perimeter of the island described in grid:
    """
    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                perimeter += 4
                if j > 0:
                    if grid[i][j - 1] == 1:
                        perimeter -= 1
                if j < len(grid[i]) - 1:
                    if grid[i][j + 1] == 1:
                        perimeter -= 1
                if i > 0:
                    if grid[i - 1][j] == 1:
                        perimeter -= 1
                if i < len(grid) - 1:
                    if grid[i + 1][j] == 1:
                        perimeter -= 1
    return perimeter

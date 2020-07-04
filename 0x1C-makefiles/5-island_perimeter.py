#!/usr/bin/python3
"""
5-main
"""


def island_perimeter(grid):
    perimetro = 0

    if not isinstance(grid, list):
        return 0
    for row in range(len(grid)):
        for col in range(len(grid[row])):
            if grid[row][ele] == 1:
                if row > 0 and grid[row - 1][col] == 0:
                    p += 1
                if col > 0 and grid[row][col - 1] == 0:
                    p += 1
                if col < (len(grid[row]) - 1) and grid[row][col + 1] == 0:
                    p += 1
                if row < (len(grid) - 1) and grid[row + 1][col] == 0:
                    p += 1
    return perimetro

#!/usr/bin/python3
"""
5-main
"""


def island_perimeter(grid):
    """Finds the perimeter island"""
    perimetro = 0

    if not isinstance(grid, list):
        return 0
    for row in range(len(grid)):
        for col in range(len(grid[row])):
            if grid[row][col] == 1:
                perimetro += 4
                if row > 0 and grid[row - 1][col] == 1:
                    perimetro -= 1
                if col > 0 and grid[row][col - 1] == 1:
                    perimetro -= 1
                if col < (len(grid[row]) - 1) and grid[row][col + 1] == 1:
                    perimetro -= 1
                if row < (len(grid) - 1) and grid[row + 1][col] == 1:
                    perimetro -= 1
    return perimetro

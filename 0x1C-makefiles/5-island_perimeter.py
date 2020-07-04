#!/usr/bin/python3
"""
5-main
"""
def island_perimeter(grid):
    perimetro = 0
    for count,row in enumerate(grid):
        for ele in range(len(row)):
            if grid[count][ele] == 1:
                if count > 0 and grid[count - 1][ele] == 0:
                    perimetro+=1
                if count < (len(grid) - 1) and grid[count + 1][ele] == 0:
                    perimetro+=1
                if ele > 0 and grid[count][ele - 1] == 0:
                    perimetro+=1
                if ele < (len(row) - 1) and grid[count][ele + 1] == 0:
                    perimetro+=1
    return perimetro

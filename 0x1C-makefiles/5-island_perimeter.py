#!/usr/bin/python3
"""
5-main
"""
perimetro = 0
list_para = [[-1, 0],[1,0],[0,-1],[0,1]]
for count,row in enumerate(grid):
    for ele in range(len(row)):
        if grid[count][ele] == 1:
            for un,do in list_para:
                if grid[count + un][ele + do] == 0:
                    perimetro+=1

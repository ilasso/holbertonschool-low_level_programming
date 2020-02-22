#!/usr/bin/python3
"""
module: 5-island_perimeter
returns the perimeter of the island described in grid
grid is a list of list of integers:
0 represents a water zone
1 represents a land zone
One cell is a square with side length 1
Grid cells are connected horizontally/vertically (not diagonally).
Grid is rectangular, width and height don’t exceed 100
Grid is completely surrounded by water, and there is one island (or nothing).
The island doesn’t have “lakes” (water inside that isn’t connected to
the water around the island).
"""


def island_perimeter(gri):
    """
    Function: island_perimeter
    returns the perimeter of the island described in grid(see module doc)
    """

    nobord = 0
    bord = 0
    for i in range(len(gri)):
        for j in range(len(gri[i])):
            if gri[i][j] == 1:
                nobord += 1
                if i != len(gri) - 1:
                    if gri[i + 1][j] == 1:
                        bord += 1
                if j != len(gri[i]) - 1:
                    if gri[i][j + 1] == 1:
                        bord += 1
    per = (nobord * 4) - (bord * 2)
    return per

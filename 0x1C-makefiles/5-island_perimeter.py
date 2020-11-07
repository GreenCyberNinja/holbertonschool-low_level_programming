#!/usr/bin/python3
"""file for getting island perimeter"""
def island_perimeter(grid):
    """returns perimeter"""
    hw = 0
    h = 0
    for x in grid:
        w = 0
        for y in x:
            if y == 1:
                w += 1
            if w > hw:
                hw = w
        if w > 0:
            h += 1

    return((hw + hw) + (h + h))

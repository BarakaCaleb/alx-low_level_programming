!#/usr/bin/python3
"""No module is to be imported"""

def island_perimeter(grid):
    """This function returns the perimeter of an island."""
    perimeter = 0
    for list in grid:
        for i in list:
            perimeter = perimeter + i
    return (perimeter + 1) * 2


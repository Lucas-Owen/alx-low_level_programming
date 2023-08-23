#!/usr/bin/python3
"""
    This module defines a function island_perimeter
"""


def island_perimeter(grid):
    """
        Returns the perimeter of the island described in grid
        Args:
        grid: is a list of list of integers:
            0 represents a water zone
            1 represents a land zone
            One cell is a square with side length 1
            Grid cells are connected horizontally/vertically (not diagonally).
            Grid is rectangular, width and height don’t exceed 100
            Grid is completely surrounded by water, and there is one
            island (or nothing).
            The island doesn’t have “lakes” (water inside that isn’t
            connected to the water around the island).
    """
    if not isinstance(grid, list):
        raise TypeError("grid must be a list")
    if not grid:
        raise ValueError("grid cannot be empty")
    if {type(cells) for cells in grid} != {list}:
        raise TypeError("grid must be a list of lists")
    if {type(val) for cells in grid for val in cells} != {int}:
        raise ValueError("grid must be a list of lists of integers")
    perimeter = 0
    for i, row in enumerate(grid):
        for j, cell in enumerate(row):
            # Add the neigboring cells that are 0
            if cell == 1:
                # Left
                if j - 1 < 0 or grid[i][j-1] == 0:
                    perimeter += 1
                # Right
                if j + 1 >= len(row) or grid[i][j+1] == 0:
                    perimeter += 1
                # Up
                if i - 1 < 0 or grid[i-1][j] == 0:
                    perimeter += 1
                # Down
                if i + 1 >= len(grid) or grid[i+1][j] == 0:
                    perimeter += 1
    return perimeter

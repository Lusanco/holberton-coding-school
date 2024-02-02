#!/usr/bin/python3
"""
Module Name: 2-matrix_divided
Description: Divides all elements of a matrix
Authors: Lusanco, Ltoro9, Antoniofdjs Date: Feb 01 2024
"""


def matrix_divided(matrix, div):
    """Description: Divides all elements of a matrix
    - matrix (list): 2d array.
    - div (int or float): Number to divide by."""

    mtx = "matrix must be a matrix (list of lists) of integers/floats"
    siz = "Each row of the matrix must have the same size"

    if div == 0:
        raise ZeroDivisionError("division by zero")

    if type(div) is not int and type(div) is not float:
        raise TypeError("div must be a number")

    temp = len(matrix[0])
    for row in matrix:
        if type(row) is not list:
            raise TypeError(mtx)
        if temp != len(row):
            raise TypeError(siz)
        temp = len(row)

    new_list = [row[:] for row in matrix]

    for row in range(len(matrix)):
        for column in range(len(matrix[row])):
            if (
                type(matrix[row][column]) is not int
                and type(matrix[row][column]) is not float
            ):
                raise TypeError(mtx)
            result = (
                "{:.1f}".format(matrix[row][column] / div)
                if matrix[row][column] % div == 0
                else "{:.2f}".format(matrix[row][column] / div)
            )
            new_list[row][column] = float(result)

    return new_list

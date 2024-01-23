#!/usr/bin/python3
def print_matrix_integer(matrix=[[]]):
    for row in matrix:
        for _ in range(len(row)):
            if _ == len(row) - 1:
                print("{:d}".format(row[_]), end="")
            else:
                print("{:d} ".format(row[_]), end="")
        print()

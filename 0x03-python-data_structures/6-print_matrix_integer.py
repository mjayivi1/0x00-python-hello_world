#!/usr/bin/python3
def print_matrix_integer(matrix=[[]]):
    if matrix is None:
        print("")
    else:
        for i in range(len(matrix)):
            for j in range(len(matrix[i])):
                if j == 2:
                    print("{:d}".format(matrix[i][j]), end="")
                elif j == 0 or j == 1:
                    print("{:d} ".format(matrix[i][j]), end="")
            print("")
# 2-D Arrays Matrices

## Aim:

To study and implement C++ 2D Array-Matrices.

### Theory:

A 2D array (two-dimensional array) in C++ is an array of arrays that can be visualized as a matrix of rows and columns. 
It is used to store data in a tabular format, such as a grid, making it useful for mathematical operations like matrix addition, subtraction, and multiplication.

2D arrays are widely used in:

- Scientific computations

- Game development (for grids, boards)

- Image processing

- Matrix operations

## 1. Algorithm: Addition of two matrices

**Step 1**: Start

**Step 2**: Declare variables R1, C1, R2, C2 to store rows and columns of both matrices

**Step 3**: Prompt user to enter the number of rows and columns for the first matrix, and read R1, C1

**Step 4**: Prompt user to enter the number of rows and columns for the second matrix, and read R2, C2

**Step 5**: Check if matrix dimensions are the same:

- If R1 ≠ R2 or C1 ≠ C2, print error and terminate the program

**Step 6**: Declare three 2D arrays:

- matrix1[R1][C1], matrix2[R2][C2], sum[R1][C1]

**Step 7**: Input elements for the first matrix using nested loops

**Step 8**: Display the first matrix

**Step 9**: Input elements for the second matrix using nested loops

**Step 10**: Display the second matrix

**Step 11**: Perform matrix addition:

- For each element [i][j], calculate

sum[i][j] = matrix1[i][j] + matrix2[i][j]

**Step 12**: Display the resulting sum matrix

**Step 13**: End

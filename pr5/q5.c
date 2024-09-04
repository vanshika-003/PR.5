#include <stdio.h>

void main() 
{
    int rows, cols, i,j, rowNum,colNum,rowSum = 0,colSum = 0;


    printf("Enter the array's row size: ");
    scanf("%d", &rows);
    printf("Enter the array's column size: ");
    scanf("%d", &cols);

    int a[rows][cols];


    printf("Enter array's elements:\n");
    for (i = 0; i < rows; i++) 
	{
        for (j = 0; j < cols; j++) 
		{
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // Input the row number
    printf("Enter row number: ");
    scanf("%d", &rowNum);


    printf("Elements of row %d: ", rowNum);

    for (j = 0; j < cols; j++)
	 {
        printf("%d ", a[rowNum][j]);
        rowSum += a[rowNum][j];
    }

    printf("\nThe sum of row %d: %d\n", rowNum, rowSum);


    printf("Enter column number: ");
    scanf("%d", &colNum);


    printf("Elements of column %d: ", colNum);

    for (i = 0; i < rows; i++)
	 {
        printf("%d ", a[i][colNum]);
        colSum += a[i][colNum];
    }
    printf("\nThe sum of column %d: %d\n", colNum, colSum);

}
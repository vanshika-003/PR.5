#include <stdio.h>


void main()
{
    int size, i, j;


    printf("Enter the array's row & column size: ");
    scanf("%d", &size);

    int a[size][size], t[size][size];


    printf("Enter array's elements:\n");

    for (i = 0; i < size; i++) 
	{
        for (j = 0; j < size; j++)
		 {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }


    for (i = 0; i < size; i++) 
	{
        for (j = 0; j < size; j++) 
		{
            t[j][i] = a[i][j];
        }
    }


    printf("The transpose matrix of the array:\n");

    for (i = 0; i < size; i++)
	 {
        for (j = 0; j < size; j++)
		 {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }


}
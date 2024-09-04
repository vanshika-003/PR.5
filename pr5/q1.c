#include <stdio.h>

void main() 
{
    int n, i;

    printf("Enter the array's size: ");
    scanf("%d", &n);

    int a[n];


    printf("Enter array's elements:\n");
    for (i = 0; i < n; i++) 
	{
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }


    printf("Negative elements from an array: ");
    for (i = 0; i < n; i++) 
	{
        if (a[i] < 0) 
		{
            printf("%d ", a[i]);
        }
        else
        {
        	printf("Both elements are positive ");
		}
    }
    printf("\n");


}
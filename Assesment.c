// Write a program to make multiplication of 2-D Matrix

#include <stdio.h>
main()
{
    int a[100][100], b[100][100], mul[100][100], r, c, i, j, k;

    printf("enter the number of row="); 

    scanf("%d", &r);

    printf("enter the number of column="); 

    scanf("%d", &c);

    printf(".................First matrix.....................\n");

    for (i = 0; i < r; i++)

    {
        for (j = 0; j < c; j++)
        {
            printf("Enter Element:");
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("\nFirst matrix:\n");
    for (i = 0; i < r; i++) 					
    {
        for (j = 0; j < c; j++)
        {
            printf(" %d ", a[i][j]);
        }
        printf("\n");
    }

    printf("\n.................Second matrix....................\n");

    for (i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("Enter Element:");
            scanf("%d", &b[i][j]);
        }
    }
    printf("\nSecond matrix:\n"); 
    
    for (i = 0; i < r; i++) 					
    {
        for (j = 0; j < c; j++)
        {
            printf(" %d ", b[i][j]);
        }
        printf("\n");
    }

    printf("\n..........Result : multiplication matrix..........\n");		 

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            mul[i][j] = 0;

            for (k = 0; k < c; k++)
            {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }

   

    for (i = 0; i < r; i++)    
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", mul[i][j]);
        }
        printf("\n");
    }
}

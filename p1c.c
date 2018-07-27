#
#include <stdlib.h>
#include <stdio.h>
int a[10][10], b[10][10], c[10][10];
int m, n, m1, n1;
void transpose1();
void transpose2();
void create1();
void create2();
void matrixadd();
void multiply();
int main()
{
    int i, j;
    int opt, val, choice;
    do
    {
        printf("\n ********* Main Menu ********* \n");
        printf("\n 1.Create 1st matrix \n");
        printf("\n 2.create 2nd matrix \n");
        printf("\n 3.Addition \n");
        printf("\n 4.Multiplication \n");
        printf("\n 5.Treaspose of 1st Matrix \n");
        printf("\n 6.Traspose of 2nd Matrix \n");
        printf("\n 7.Exit\n");
        printf("\n Enter your choice .......\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            create1();
            break;
        case 2:
            create2();
            break;
        case 3:
            matrixadd();
            break;
        case 4:
            multiply();
            break;
        case 5:
            transpose1();
            break;
        case 6:
            transpose2();
            break;
        case 7:
            break;
        }
    } while (choice != 7);
}

void transpose1()
{
}
void transpose2()
{
}
void create1()
{
    int i, j;
    printf("Enter the number of rows and columns of matrix \n");
    scanf("%d%d", &m, &n);
    printf("Enter the elements in the matrix..");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {

            scanf("%d", &a[i][j]);
        }
    }
    printf("The 1st array is :\n");

    for (i = 0; i < m; i++)
    {
        for (j = 0; i < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

void create2()
{
}

void matrixadd()
{
}

void multiply()
{
}

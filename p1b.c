#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
int arr1[20], arr2[20], arr[40];
int n;
void disp(int arr[]);
void create(int arr[]);
void bubbleSort(int temp[]);
void marged(int l[], int r[]);
int length(int temp[]);
int main()
{
    int i;
    int opt, val, choice;
    do
    {
        printf("\n *************| Main Menu |************\n");
        printf("\n 1.Create 1st array\n");
        printf("\n 2.Create 2nd array\n");
        printf("\n 3.Sort 1st array\n");
        printf("\n 4.Sort 2st array\n");
        printf("\n 5.Merge\n");
        printf("\n 6.Sorted Merged array\n");
        printf("\n Enter your choice\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            create(arr1);
            printf("The 1st array is :");
            disp(arr1);
            break;
        case 2:
            create(arr2);
            printf("The 2st array is :");
            disp(arr2);

            break;
        case 3:
            bubbleSort(arr1);
            printf("The second 1nd array is:");
            disp(arr1);
            break;
        case 4:
            bubbleSort(arr2);
            printf("The second 2nd array is:");
            disp(arr2);
            break;
        case 5:
            marged(arr1, arr2);

        case 6:
            printf("The merged sorted array is : ");
            disp(arr);
            break;
        case 7:
            break;
        }
    } while (choice != 7);
}
int length(int temp[])
{
    int i = 0;
    while (temp[i] != '\0')
    {
        i++;
    }
    return i;
}
void create(int temp[])
{
    int i, n;
    printf("Enter number of elements:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter %dth elements ", i);
        scanf("%d", &temp[i]);
    }
}
void disp(int temp[])
{
    int i, n;
    n = length(temp);
    for (i = 0; i < n; i++)
    {
        printf("%d\n", temp[i]);
    }
}
void bubbleSort(int temp[])
{
    int i, j, x;
    n = length(temp);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (temp[j] > temp[j + 1])
            {
                x = temp[j];
                temp[j] = temp[j + 1];
                temp[j + 1] = x;
            }
        }
    }
}
void marged(int l[], int r[])
{
    int n1, n2;
    int i = 0, j = 0, k = 0;
    n1 = length(l);
    n2 = length(r);
    while (i < n1 && j < n2)
    {
        if (l[i] < r[j])
        {
            arr[k] = l[i];
            i++;
            k++;
        }
        else
        {
            arr[k] = r[j];
            k++;
            j++;
        }
    }
    while (i < n1)
    {
        arr[k] = l[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = r[j];
        j++;
        k++;
    }
}

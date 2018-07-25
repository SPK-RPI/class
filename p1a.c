#include <stdio.h>
#include <malloc.h>
int arr[20];
int n;
void disp();
void bubbleShort(int n);
void reverse(int n);
int search(int);
void main()
{
    int i;
    int opt, val, choice;
    printf("Enter number of elements ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter %dth element ", i);
        scanf("%d", &arr[i]);
    }
    do
    {
        printf("\n########### Main menu ##############\n");
        printf("1. Display\n");
        printf("2. Search\n");
        printf("3. Sort\n");
        printf("4. Reverse\n");
        printf("Enter your choice ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            disp();
            break;
        case 2:
            printf("Enter value to be searched..\n");
            scanf("%d", &val);
            i = search(val);
            if (i == -1)
            {
                printf("Value not found");
            }
            else
            {
                printf("Value found at location %d", i + 1);
            }
            break;
        case 3:
            bubbleShort(n);
            break;
        case 4:
            reverse(n);
            break;
        case 5:
            break;
        }
    } while (choice != 5);
}
//****************************************************************************
int search(int val)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == val)
        {
            return i;
        }
        if (i == n)
        {
            return -1;
        }
    }
}
//****************************************************************************
void disp()
{
    int i;
    for(i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
}
void bubbleShort(int n)
{
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void reverse(int n)
{
    int j = n - 1;
    int i = 0,
        temp;
    while (i < j)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}
//********************************************************************************
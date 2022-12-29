#include <stdio.h>
void main()
{
    int a[100000], choice, element;
    FILE *fp;
    printf("\n1. For Best Case Sorting\n1. For Avarage Case Sorting\n1. For Worst Case Sorting\n");
    printf("Enter Your Choice : ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        fp = fopen("best.txt", "r");
    }
    else if (choice == 2)
    {
        fp = fopen("best.txt", "r");
    }
    else if (choice == 3)
    {
        fp = fopen("best.txt", "r");
    }
    else
    {
        printf("Invalid Input");
    }
    printf("Enter Number Of choice You Want To Sort : ");
    scanf("%d", &element);
    for (int i = 0; i < element; i++)
    {
        fscanf(fp, "%d", &a[i]);
    }
    for (int i = 0; i < element; i++)
    {
        for (int j = 0; j < element - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < element; i++)
    {
        printf("choice : %d\n", a[i]);
    }
}
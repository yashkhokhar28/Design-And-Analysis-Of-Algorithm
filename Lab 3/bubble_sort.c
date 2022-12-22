#include <stdio.h>
#include <time.h>
clock_t start, end;
double cpu_time_used;
void main()
{
    int element;
    printf("Enter Number Of Element : ");
    scanf("%d", &element);
    int arr[element];
    for (int i = 0; i < element; i++)
    {
        printf("Enter Element : ");
        scanf("%d", &arr[i]);
    }
    start = clock();
    for (int i = 0; i < element; i++)
    {
        for (int j = 0; j < element - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < element; i++)
    {
        printf("Element : %d\n", arr[i]);
    }
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("\nTime : %f", cpu_time_used);
}
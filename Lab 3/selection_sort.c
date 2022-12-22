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
        int minj = i;
        int minx = arr[i];
        for (int j = i + 1; j < element; j++)
        {
            if (arr[j] < minx)
            {
                minj = j;
                minx = arr[j];
            }
        }
        arr[minj] = arr[i];
        arr[i] = minx;
    }
    for (int i = 0; i < element; i++)
    {
        printf("Element : %d\n", arr[i]);
    }
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("\nTime : %f", cpu_time_used);
}
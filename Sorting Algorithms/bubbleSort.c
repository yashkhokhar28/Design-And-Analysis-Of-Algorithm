#include <stdio.h>
void main()
{
    int count;
    printf("Enter Number Of Elemnets : ");
    scanf("%d", &count);
    int arr[count];
    for (int i = 0; i < count; i++)
    {
        printf("Enter [%d] Element : ", i);
        scanf("%d", &arr[i]);
    }
    bubbleSort(arr, count);
}

void bubbleSort(int arr[], int element)
{
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
}
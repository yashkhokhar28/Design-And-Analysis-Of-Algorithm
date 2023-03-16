#include <stdio.h>
void main()
{
    int count;
    printf("Enter Number Of Element : ");
    scanf("%d", &count);
    int arr[count];
    for (int i = 0; i < count; i++)
    {
        printf("Enter [%d] Element : ", i);
        scanf("%d", &arr[i]);
    }
    insertionSort(arr, count);
}

void insertionSort(int arr[], int element)
{
    for (int i = 1; i < element; i++)
    {
        int x = arr[i];
        int j = i - 1;
        while (j >= 0 && x < arr[j])
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = x;
    }
    for (int i = 0; i < element; i++)
    {
        printf("Element : %d\n", arr[i]);
    }
}

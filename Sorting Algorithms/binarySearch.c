#include <stdio.h>
void main()
{
    int element, elementToBeFound;
    printf("Enter Number Of Element In Array : ");
    scanf("%d", &element);
    int arr[element];
    for (int i = 0; i < element; i++)
    {
        printf("Enter [%d] Element : ", i);
        scanf("%d", &arr[i]);
    }
    printf("Enter Element You Want To Find : ");
    scanf("%d", &elementToBeFound);
    int low = 0;
    int high = element - 1;
    int result = binarySearch(arr, low, high, elementToBeFound);
    printf("Element Found @%d", result);
}

int binarySearch(int arr[], int lower, int higher, int element)
{
    int mid = (lower + higher) / 2;
    if (arr[mid] == element)
        return mid;
    if (arr[mid] > element)
        return binarySearch(arr, lower, mid - 1, element);
    return binarySearch(arr, mid + 1, higher, element);
}
#include <stdio.h>
#include <stdlib.h>
void main()
{
    FILE *fp1, *fp2, *fp3;
    int element;
    fp1 = fopen("best.txt", "w");
    fp2 = fopen("worst.txt", "w");
    fp3 = fopen("avarage.txt", "w");
    printf("Enter Number : ");
    scanf("%d", &element);
    for (int i = 1; i < element; i++)
    {
        fprintf(fp1, "%d\n", i);
        fprintf(fp2, "%d\n", element - i - 1);
        fprintf(fp3, "%d\n", rand());
    }
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
}
#include <stdio.h>
#include <stdlib.h>
#define NULL 0
void main()
{
    int *ptr;
    int i,n, sum = 0;
    float avg;
    printf("Enter the number of elements you want to store in the array : ");
    scanf("%d", &n);
    ptr = (int*)malloc (sizeof(int));
    if (ptr == NULL)
    {
        printf("The required amount of memory is not available");
       // getch();
        exit(0);
    }
    else
    {
        printf("Enter the elements\n");
        for ( i = 0; i < n; i++)
            scanf("%d", ptr + i);
        for ( i = 0; i < n; i++)
        {
            sum = sum + (*(ptr + i));
        }
        printf("Sum of %d elements of array is = %d\n",n,sum);
        avg = sum/n;
        printf("The average of %d number of the array is %.2f",n,avg);
    }
    //getch();
}
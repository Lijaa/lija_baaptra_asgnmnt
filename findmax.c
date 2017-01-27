/**
 * C program to find max,min,avg of element entered by a user
 */

#include <stdio.h>
#include <conio.h>
void main()
{
    int a[100];
    int i,max,min,size;
    float sum=0,avg=0;
    printf("Enter size of the array: ");
    scanf("%d", &size);
    printf("Enter elements in the array: ");
    for(i=0;i<size;i++)
    {
        scanf("%d", &a[i]);
        sum=sum+a[i];
    }
    Avg=sum/size;
    max = a[0];
    min = a[0];
    for(i=1; i<size; i++)
    {
        if(a[i]>max)
        {
            max = a[i];
        }
        if(a[i]<min)
        {
            min = a[i];
        }
    }
   printf("Maximum element = %d\n", max);
    printf("Minimum element = %d", min);
     printf("\naverage = %d", avg);
     getch();
 
} 


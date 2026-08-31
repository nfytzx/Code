#ifndef ARRAY_H
#define ARRAY_H
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void input(int a[], int n)
{
    int i;
    printf("please input %d numbers:\n", n);
    for (i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
}
void print(int a[], int n)
{
    int i;
    printf("\nArray elements:\n");
    for (i=0; i<n; i++)
    {
        if(i%10==0)
            printf("\n");
        printf("%6d ", a[i]);
    }
    printf("\n");
}
void init(int a[], int n)
{
    int i;
    srand(time(0));
    for (i=0; i<n; i++)
    {
        a[i] = rand()%1000+1;
    }
}

#endif // ARRAY_H
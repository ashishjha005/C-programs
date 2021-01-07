#include<stdio.h>
#define MAX 10
void insertion_sort(int*,int);
void main()
{
    int a[MAX],i,n;

    printf("ENTER ELEMENTS TO BE INSERTED:\n");
    scanf("%d",&n);
    printf("Enter %d elements:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    insertion_sort(a,n);
    printf("sorted elements\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    getch();
}
void insertion_sort(int *x,int n)
{
    int temp,i,j;
    for(i=1;i<n;i++)
    {
        temp=x[i];
        j=i-1;
        while(temp<x[j]&&j>=0)
        {
            x[j+1]=x[j];
            j=j-1;
        }
        x[j+1]=temp;
    }
}

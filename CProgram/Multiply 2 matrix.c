#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,r1,c1,r2,c2,j,k,sum=0;
    int a[100][100],b[100][100],c[100][100];
    printf("Enter number of rows in 1st matrix:\n");
    scanf("%d",&r1);
    printf("Enter number of columns in 1st matrix:\n");
    scanf("%d",&c1);
    printf("Enter the first matrix\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
           scanf("%d",&a[i][j]);
        }
    }
 printf("Entered 1st Matrix:\n");
 for(i=0;i<r1;i++)
 {
     for(j=0;j<c1;j++)
     {
       printf("%d\t",a[i][j]);
     }
     printf("\n");
 }
 printf("Enter number of rows in 2nd matrix:\n");
    scanf("%d",&r2);
    printf("Enter number of columns in 2nd matrix:\n");
    scanf("%d",&c2);
    if(c1!=r2)
           printf("Matrix multiplication is not possible!");
 else
 {  printf("Enter the second matrix\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
           scanf("%d",&b[i][j]);
        }
    }
 printf("Entered 2nd Matrix:\n");
 for(i=0;i<r2;i++)
 {
     for(j=0;j<c1;j++)
     {
       printf("%d\t",b[i][j]);
     }
     printf("\n");
 }
 for(i=0;i<r1;i++)
 {
     for(j=0;j<c2;j++)
     {
         for(k=0;k<r2;k++)
     {
        sum=sum+(a[i][k]*b[k][j]);
     }
     c[i][j]=sum;
     sum=0;
 }
 }
 printf("Product of the matrix:\n");
 for(i=0;i<r1;i++)
 {
     for(j=0;j<c2;j++)
     {
       printf("%d\t",c[i][j]);
     }
     printf("\n");
 }
 }
 return 0;
}

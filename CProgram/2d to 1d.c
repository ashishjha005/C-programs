#include<stdio.h>
int main()
{ int a[100][100], b[100], m ,n,i,j,k=0;
printf("Enter number of rows in the matrix :\n");
    scanf("%d",&m);
    printf("Enter number of columns in the matrix :\n");
    scanf("%d",&n);


    printf("Enter the numbers in the matrix : \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter %d %d\t",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
printf(" 2d array is \n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d ",a[i][j]);


}
printf("\n");
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
b[k]=a[i][j];
k++;
}
}
printf(" 1d array is \n");
for(i=0; i<(m*n);i++)
printf("%d ",b[i]);

return 0;
}

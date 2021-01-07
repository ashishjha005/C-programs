#include<stdio.h>
int main()
{

    int a[100] , b[100] , c[100] ,n ,m ,i ,k ,swap;

    printf("ENTER THE DETAILS FOR 1ST ARRAY \n");
    printf("ENTER THE NUMBER OF NUMBERS YOU WANT TO ENTER : ");
    scanf("%d",&n);

    printf("ENTER THE %d NUMBERS \n",n);
    for(i=0; i<n; i++)
     scanf("%d",& a[i]);



    printf("\n\nENTER THE DETAILS FOR 2nd ARRAY \n");
    printf("ENTER THE NUMBER OF NUMBERS YOU WANT TO ENTER : ");
    scanf("%d",&m);

    printf("ENTER THE %d NUMBERS \n" ,m);
    for(i=0; i<m; i++)
     scanf("%d",& b[i]);



    k=m+n;

    for(i=0;i<n;i++)
        c[i]=a[i];

   for(i=0;i<m;i++)
     c[n+i]=b[i];

     printf("\nSORTED ARRAY IS :");
   for(i=0;i<n+m;i++)
         printf("\n%d",c[i]);
     return 0;
}

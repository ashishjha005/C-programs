#include <stdio.h>
#include <stdlib.h>

int main()
{
   int arr[100],i,n,large,small;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
        large=small=arr[0];
        for(i=1;i<n;i++)
        {
            if(arr[i]>large)
                large=arr[i];
            if(arr[i]<small)
                small=arr[i];
        }
        printf("The largest element is %d\n",large);
        printf("The smallest element is %d",small);
        return 0;
}

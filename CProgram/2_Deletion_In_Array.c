#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[100],i,n,pos,x,e;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
        printf("To delete at first position press-1\nTo delete at last position press-2\nTo delete any element press-3\n");
        scanf("%d",&x);
    switch(x)
    {
        case 1:
        {
        for(i=1;i<n;i++)
    {
        arr[i-1]=arr[i];
    }
    printf("Array after deletion is:");
    for(i=0;i<n-1;i++)
    printf("%d ",arr[i]);
    break;
    }
    case 2:
    {
      for(i=0;i<n-1;i++)
        printf("%d ",arr[i]);

    break;
    }
    case 3:
        {
           printf("Enter which element you want to delete:");
           scanf("%d",&e);
           for(i=0;i<n;i++)
           {
               if(arr[i]==e)
               {
                   pos=i;
                   break;
               }
           }
           for(i=pos+1;i<n;i++)
     {
          arr[i-1]=arr[i];
      }
for(i=0;i<n-1;i++)
    printf("%d ",arr[i]);
break;
        }
    default:
        {printf("Enter correctly");}
}
}

#include <stdio.h>
#include <stdlib.h>

void print_array(int *, int);
void bubble_sort(int *, int);

int main()
{

    int n;
    int i;
    int j;
    int h;
    int g;
    int ch;
    int *p;
    printf("Enter the length of the array : ");
    scanf("%d", &n);
    p=(int*)malloc(n*sizeof(int));
    printf("\n Insert elements of the array : \n");
    for (i = 0; i < n; i++)
        scanf("%d", & *(p+i));

    printf("\n\n Enter the element you want to insert : ");
    scanf("%d", &h);
    print_array(p, n);
    printf("\nWhat do you want to do?\n1.Insert at first index\n2. Insert at any index\n3.Insertion at proper position in sorted array\n\n");
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
       {
	   	 for (i = n; i >= 0; i--)
				{
           			 *(p+i)=*(p+i-1);
                }
        *p = h;
        print_array(p, n+1);
        break;
		}
     case 2:
       {
	    printf("\nWhat position do you wish to insert in the array?\n");
        scanf("%d", &g);
        for (i = n; i >= g; i--)
			{
            *(p+i) = *(p+i-1);
            }
        *(p+g-1) = h;
        print_array(p, n+1);
        break;
		}
    case 3:
        {
		 bubble_sort(p, n);

         for (j = 0; h > *(p+j); j++);
         for (i = n; i >= j; i--)
	 	{
            *(p+i) = *(p+i-1);
        }
        *(p+j) = h;
        print_array(p, n+1);
        break;
        }
    default:
        printf("\nYou have entered an invalid choice.\n");
    }
    return 0;
}

void bubble_sort(int *p, int n)
	{
    int i, j;
    int swap;
    for (i = 0; i < n - 1; i++)
		{
        for (j = 0; j < n - i - 1; j++)
			 {
            if (*(p+j) > *(p+j+1))
			  {
                swap = *(p+j);
                *(p+j) = *(p+j+1);
                *(p+j+1) = swap;
              }
            }
         }
     }

void print_array(int *p, int n)
{
    int i;
    printf("\n=====Your array is: =====\n");
    for (i = 0; i < n; i++)
        printf("%d\t", *(p+i));
    printf("\n");
}

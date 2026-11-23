#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLen)
{
    int icnt = 0;

    printf("elements of array are :\n");

    for(icnt = 0; icnt < iLen; icnt++)
    {
        printf("%d\n",Arr[icnt]);
    }
    
}

int main()
{
   int *ptr = NULL;
   int iSize = 0;
   int icnt = 0;

   printf("enter no of elements you want :\n");
   scanf("%d",&iSize);

   // step 1 : allocate the memory

   ptr = (int *)malloc(sizeof(int) * iSize);


   // step 2 : use the memory

    printf("enter the elements :\n");

    for(icnt = 0; icnt < iSize; icnt++)
    {
        scanf("%d",&ptr[icnt]);
    }

    Display(ptr,iSize);

   // step 3 : free the memory

   free(ptr);

    return EXIT_SUCCESS;
}
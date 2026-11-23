#include<stdio.h>
#include<stdlib.h>

int Summation(int Arr[],int iLen)
{
    int icnt = 0;
    int iSum = 0;

    for(icnt = 0; icnt < iLen; icnt++)
    {
        iSum = iSum + Arr[icnt];
        
    }
    return iSum;
    
}

int main()
{
   int *ptr = NULL;
   int iSize = 0;
   int icnt = 0, iRet = 0;

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

    iRet = Summation(ptr,iSize);

    printf("Summation is %d\n:",iRet);

   // step 3 : free the memory

   free(ptr);

    return EXIT_SUCCESS;
}
#include<stdio.h>
#include<stdlib.h>
int main()
{
   int *ptr = NULL;
   int iSize = 0;

   printf("enter no of elements you want :\n");
   scanf("%d",&iSize);

   // step 1 : allocate the memory
   ptr = (int *)malloc(sizeof(int) * iSize);

   // step 2 : use the memory


   // step 3 : free the memory
   free(ptr);

    return EXIT_SUCCESS;
}
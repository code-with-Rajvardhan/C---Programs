#include<stdio.h>
int main()
{
    int std = 0;

    printf("Enter your standerd : \n");
    scanf("%d",& std);

    if (std == 1)
    {
        printf("your exam time is 9.30 am\n");
    }
    else if (std == 2)
    {
        printf("your exam time is 10.30 am \n");
    }
    else if (std == 3)
    {
        printf("your exam time is 11.30 am \n");
    }
    else
    {
        printf("its invalid statement");
    }
    
    
    return 0;
}
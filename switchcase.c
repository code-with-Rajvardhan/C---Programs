#include<stdio.h>
int main()
{

    int std = 0;

    printf("Enter your standerd : \n");
    scanf("%d", &std);

    switch (std)
    {
    case 1:
        printf("exam time is 9.30am \n");
        break;
    case 2:
        printf("exam time is 10.30am \n");
        break;
    case 3:
        printf("exam time is 11.30am \n");
        break;
    
    default:
        printf("its invalid");
        break;
    }

    return 0;
}
#include<stdio.h>
    int addition(int val1,int val2)
    {
        int result = 0;
         
        result = val1 + val2;

        return result;
    }

int main()
{
    int no1 = 10,no2 = 10,ans = 0;

    printf("enter the num1:\n");
    scanf("%d", & no1);
    
    printf("enter the num2:\n");
    scanf("%d", & no2);

     ans = addition(no1,no2);


    printf("addition is %d\n",ans);

    return 0;
    
}
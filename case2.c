#include<stdio.h>
int main()
{

    const int no = 11;
    const int *p = &no;

    printf("%d\n",no);
    printf("%d\n",*p);

    no++;
    p++;
    p = &no;
    *p=21;

    printf("%d\n",no);
    printf("%d\n",*p);

    return 0;
}
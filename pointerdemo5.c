#include<stdio.h>
int main()
{
    char ch = 'A';
    int no = 11;
    float marks = 90.78f;
    double d = 90.56789;

    char *cp = &ch;
    int *ip = &no;
    float *fp = &marks;
    double *dp = &d;

    printf("%d\n", *cp);
    printf("%d\n", *ip);
    printf("%d\n", *fp);
    printf("%d\n", *dp);

    return 0;

}
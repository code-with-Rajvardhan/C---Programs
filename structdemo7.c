#include<stdio.h>
#pragma pack(1)
struct demo
{
   int no;
   int Arr[3];
    
};

int main()
{
  
    struct demo dobj;

    printf("%d\n", sizeof(dobj));

    dobj.no = 10;

    dobj.Arr[0]=11;
    dobj.Arr[1]=51;
    dobj.Arr[2]=21;

    printf("%d\n", dobj.Arr[1]);

    return 0;
}
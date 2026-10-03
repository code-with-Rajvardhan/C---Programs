#include<stdio.h>
#pragma pack(1)
union demo
{
   int i;
   float f;                            
};

int main()
{
   union demo dobj;

   dobj.f = 11.0;

   printf("%f\n", dobj.f);
   printf("%d\n", dobj.i);

    return 0;
}
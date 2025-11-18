#include <stdio.h>
int main()
{
   int mark;
   printf("enter the marks\n");
   scanf("%d",&mark);
    if(mark>=40)
       printf("passed\n");
    else
    printf("failed\n");
   }

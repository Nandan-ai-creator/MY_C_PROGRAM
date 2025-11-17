#include<stdio.h>
int main()
{
    int p,r,t,si;
    printf("enter the principal\n");
    scanf("%d",&p);
     printf("enter the rate\n");
    scanf("%d",&r);
     printf("enter the time\n");
    scanf("%d",&t);
    si=(p*t*r)/100;
    printf("simple interest=%d",si);
}

#include <stdio.h>
#include<math.h>
int sicalculator()
{
    int p,t,r,si;
    printf("enter the principal\n");
    scanf("%d",&p);
    printf("enter the year of time\n");
    scanf("%d",&t);
    printf("enter the rate of interest\n");
    scanf("%d",&r);
    si=(p*t*r)/100;
    printf("simple interest=%d",si);
}
int main()
{
    sicalculator();
}

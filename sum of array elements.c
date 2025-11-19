#include<stdio.h>
int main()
{
    int sum=0,n;
    printf("enter the number of elements\n");
    scanf("%d",&n);
    int a[n];
    printf("enter the values of elements\n");
    for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
    sum=sum+a[i];
    }
    printf("sum=%d",sum);
}

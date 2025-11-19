#include <stdio.h>
int factorial(int n) {
    if(n==0){
    return 1;
    }
    return n * factorial(n-1);
}
int main()
{
    int num;
    printf("enter the number\n");
    scanf("%d",&num);
    printf("factorial=%d",factorial(num));
}

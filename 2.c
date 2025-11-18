#include<stdio.h>
int c;
int add(int a,int b){
  c=a+b;
}
int main()
{
add(90,80);
printf("sum=%d",c);
}

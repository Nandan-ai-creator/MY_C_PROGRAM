#include <stdio.h>
int main() 
{
  int a,b,c;
  printf("enter the three numbers\n");
  scanf("%d%d%d",&a,&b,&c);
  if(a>=b && a>=c){
      printf("%d is large\n",a);
  }
  else if(b>=a && b>=c){
   printf("%d is large\n",b);   
  }
  else
  printf("%d is large\n",c); 
  }

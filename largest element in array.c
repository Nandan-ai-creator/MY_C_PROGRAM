#include <stdio.h>
int main() {
    int max,a[5],i;
    printf("enter the 5 numbers\n");
    for(i=0;i<5;i++){
    scanf("%d",&a[i]);
        }
max=a[0];
for(i=0;i<5;i++){
    if(a[i]>max){
        max=a[i];
}
}
printf("largest number is %d\n",max);
}

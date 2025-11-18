#include <stdio.h>
int userdetails(){
    int age;
    char name,dept;
    printf("enter the name\n");
    scanf("%s",&name);
    printf("enter your age\n");
    scanf("%d",&age);
    printf("enter the department\n");
    scanf("%s",&dept);
}
int main()
{
    userdetails();
}

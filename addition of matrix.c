#include <stdio.h>
int main() 
{
    int row,col;
  printf("enter the rows and columns\n");
  scanf("%d%d",&row,&col);
int a[row][col],b[row][col],sum[row][col];
printf("enter the matrix a:\n");
  for(int i=0;i<row;i++){
      for(int j=0;j<col;j++){
          scanf("%d",&a[i][j]);
      }
  }
   printf("enter the matrix b:\n");
  for(int i=0;i<row;i++){
      for(int j=0;j<col;j++){
          scanf("%d",&b[i][j]);
      }
  }
  for(int i=0;i<row;i++){
      for(int j=0;j<col;j++){
          sum[i][j]=a[i][j]+b[i][j];
      }
  }
  printf("resultant matrix:\n");
  for(int i=0;i<row;i++){
      for(int j=0;j<col;j++){
      printf("%d\t",sum[i][j]);
  }
  printf("\n");
}
}

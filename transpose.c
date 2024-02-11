#include <stdio.h>
void main(){
  //WAP TO INPUT TWO MATRIX FROM USER and print them
  int i,j,a,b,r,c,r1,c2,a1,b1;
  printf("Enter the row of matrix : ");
  scanf("%d",&a);
  printf("Enter the column of matrix : ");
  scanf("%d",&b);
  int arr[a][b];
  for(i=0;i<a;i++){
    for(j=0;j<b;j++){
      printf("enter the a%d%d element : ",i+1,j+1);
      scanf("%d",&arr[i][j]);
    }
  }  printf("The  mayrix is:\n");
    for(i=0;i<a;i++){
      for(j=0;j<b;j++){
        printf("%d  ",arr[i][j]);
      }printf("\n");
  }
  printf("The transose of the matrix is : \n");
  for(i=0;i<b;i++)
  {
    for(j=0;j<a;j++)
    {
      printf("%d ",arr[j][i]);
    }printf("\n");
  }

}

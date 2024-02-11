#include<stdio.h>
void main()
{
  int a,b,s=0,i,j,k;
  printf("Enter the row & column size of matrix : ");
  scanf("%d%d",&a&b);
  int arr[a][b];
  printf("Enter matrix %d elemenets : ",a*b);
  for(i=0;i<a;i++)
  {
    for(j=0;j<b;j++)
    {
      scanf("%d",&arr[i][j]);
      if(arr[i][j]%2==0)
      s++;
    }
  }
  if(s==a*b)
  printf("The given matrix is a uniformly matrix");
  else
  printf("The given matrix is not a uniformly matrix");
}

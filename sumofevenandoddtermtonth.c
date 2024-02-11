#include<stdio.h>
void main()
{
  int a,b,i,sum=0,s=0;
  printf("Enter the first term from where you want to find the sum of even and odd term : ");
  scanf("%d",&a);
  printf("Enter the last term : ");
  scanf("%d",&b);
  for(i=a;i<=b;i++)
  {
    if(i%2==0)
    sum=sum+i;
    else
    s=s+i;
  }
  printf("The summation of even term is : %d",sum);
  printf("\nThe summation of odd term is : %d",s);
}

#include<stdio.h>
int fun(int n)
{
  static int x;

  if(n>0){
  x++;
  return x+fun(n-1);}
  return 0;
}
void main()
{
  int a=5;
  printf("%d",fun(a));
}

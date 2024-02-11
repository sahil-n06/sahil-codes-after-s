#include <stdio.h>
int main()
{
    int n,i,c=0,x=0;
    printf("enter the number :");
    scanf("%d",&n);
    for(i=2;i<n/2;i++){
      if(n%i==0){
      //printf("%d\n",i);
      x=i+x;
      c++;
    }
    //printf("%d\n",(x+1)/c);

  }
  printf("%d\n",(x+1)/(c));
      if(c==0)
      printf("number is prime");
    return 0;
}

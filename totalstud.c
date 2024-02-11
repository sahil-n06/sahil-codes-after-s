#include <stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,e,avg;
  printf("enter the marks of 5 subject :");
  scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
  avg=(a+b+c+d+e)/5;
  double round (double avg);
  printf("\n%d",avg);
  switch(avg)
  {
    case 90 ... 100 :
    printf("grade A");
    break;
    case 80 ... 89:
    printf("grade B");
    break;
    case 70 ... 79:
    printf("grade c");
    break;
    case 60 ... 69:
    printf("grade D");
    break;
    case 50 ... 59:
    printf("grade E");
    break;
    default:
    printf("fail");

  }


    return 0;
}

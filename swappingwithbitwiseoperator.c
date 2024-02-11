#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter the number : ");
	scanf("%d",&a);
	printf("Enter t
	he number : ");
	scanf("%d",&b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("After swapping : ");
	printf("\na = %d, b = %d",a,b);
}

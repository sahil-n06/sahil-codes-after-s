// #include<stdio.h>
// void tofhanoi(int n,char s,char a,char d)
// {
//   if(n==1)
//   printf("%c to %c\n",s,d);
//   else
//   {
//     tofhanoi(n-1,s,d,a);
//     printf("%c to %c\n",s,d);
//     tofhanoi(n-1,a,s,d);
//   }
// }
// void main()
// {
//   static int i=0;
//   int n;
//   char s,a,d;
//   printf("Enter the number of discs : ");
//   scanf("%d",&n);
//   tofhanoi(n,'s','a','d');
// }
//another way to do
#include<stdio.h>
int tofhanoi(int n,char s,char a,char d){
    if(n > 0)
    {
        tofhanoi(n-1,s,d,a);
        printf("%c to %c \n",s,d);
        tofhanoi(n-1,a,s,d);
    }
}
void main(){
    int n;
    char s,a,d;
    printf("Enter the number of discs : ");
    scanf("%d",&n);
    tofhanoi(n,'s','a','d');
}

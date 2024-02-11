#include<stdio.h>
#include<string.h>
struct time{
  int hour;
  int min;
};
struct TRAIN_INFO{
  int train_no;
  char train_name[30];
  struct time x,y;
  char start_p[20];
  char end_p[20];
};
struct TRAIN_{
  int train_no;
  char train_name[30];
  struct time x,y;
  char start_p[20];
  char end_p[20];
};
void main()
{
  int n,i,a,j,m,s,h1,m1;
//   char a,str1;
  printf("Enter 1 to sort trains acc to train number\nEnter 2 to print the trains from a particular station at a particular time\nEnter 3 to print all the trains whithin the next one hour\nenter 4 to print all the trains b/w a pair of start and end station\n");
  scanf("%d",&s);
  printf("Enter number of trains : ");
  scanf("%d",&n);
  struct TRAIN_INFO t[n];

  for(i=0;i<n;i++)
  {
    printf("Train number : ");
    scanf("%d",&t[i].train_no);
    printf("Train name : ");
    scanf("%s",t[i].train_name);
    printf("Enter start position/station : ");
    scanf("%s",t[i].start_p);
    printf("Enter end position/station : ");
    scanf("%s",t[i].end_p);
    printf("Enter arrival time in hh:mm  : ");
    scanf("%d:%d",&t[i].y.hour,&t[i].y.min);
    printf("Enter departure time in hh:mm  : ");
    scanf("%d:%d",&t[i].x.hour,&t[i].x.min);
  }

  printf("Train number\tTrain name\tstart position/station\tend position/station\tarrival time in hh:mm\tdeparture time in hh:mm\n");
  for(i=0;i<n;i++)
  {
      printf("%d\t%s\t%s\t\t%s\t\t%d:%d\t\t%d:%d",t[i].train_no,t[i].train_name,t[i].start_p,t[i].end_p,t[i].y.hour,t[i].y.min,t[i].x.hour,t[i].x.min);
      printf("\n");
  }
  switch(s)
  {
    case 1:

  for(i=0;i<n-1;i++)
  {
    for(j=0;j<n-1-i;j++)
    {
      if(t[j].train_no>t[j+1].train_no)
      {
        m=t[j].train_no;
        t[j].train_no=t[j+1].train_no;
        t[j+1].train_no=m;
        strcpy(t[j].train_name,t[j+1].train_name);
        strcpy(t[j].start_p,t[j+1].start_p);
        strcpy(t[j].end_p,t[j+1].end_p);
        m=t[j].y.hour;
        t[j].y.hour=t[j+1].y.hour;
        t[j+1].y.hour=m;
        m=t[j].y.min;
        t[j].y.min=t[j+1].y.min;
        t[j+1].y.min=m;
        m=t[j].x.hour;
        t[j].x.hour=t[j+1].x.hour;
        t[j+1].x.hour=m;
        m=t[j].x.min;
        t[j].x.min=t[j+1].x.min;
        t[j+1].x.min=m;
      }
    }
  }
  printf("\n\n\n\n");
  printf("Train number\tTrain name\tstart position/station\tend position/station\tarrival time in hh:mm\tdeparture time in hh:mm\n");
  for(i=0;i<n;i++)
  {
      printf("%d\t%s\t%s\t\t%s\t\t%d:%d\t\t%d:%d",t[i].train_no,t[i].train_name,t[i].start_p,t[i].end_p,t[i].y.hour,t[i].y.min,t[i].x.hour,t[i].x.min);
      printf("\n");
  }
  break;
}
// case 2:
// printf("enter the start station and time(hh:mm) : ");
// scanf("%s%d:%d",str1,h1,m1);
// if(!(strcmp(str1,t[3].start_p))&&(t[5].x.hour==h1)&&(t[5].x.min))
// {

// }
}

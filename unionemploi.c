#include<stdio.h>
#include<string.h>
union empl{
  char name[20];
  int id;
  long int salary;
  char depart[10];
}e;
void main()
{
  //union empl e;
  char c;
  printf("Enter name : ");
  gets(e.name);
  printf("Name of an employee is %s\n",e.name);
  printf("Employee id : ");
  scanf("%d",&e.id);
  printf("id of the employee is %d\n",e.id);
  printf("Enter salary of an employee : ");
  scanf("%ld",&e.salary);
  printf("salary of an employee is %ld\n",e.salary);
  scanf("%c",&c);
  printf("Enter the department of an employee : ");
  gets(e.depart);
  printf("department of the employee is %s",e.depart);
//  printf("Name of an employee is %s\nid of the employee is %d\nsalary of an employee is %ld\ndepartment of the employee is %s",e.name,e.id,e.salary,e.depart);
}

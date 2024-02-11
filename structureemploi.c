#include<stdio.h>
#include<string.h>
struct empl{
  char name[20];
  int id;
  long int salary;
  char depart[10];
};
void main()
{
  struct empl e;
  char c;
  printf("Enter name : ");
  gets(e.name);
  printf("Employee id : ");
  scanf("%d",&e.id);
  printf("Enter salary of an employee : ");
  scanf("%ld",&e.salary);
  scanf("%c",&c);
  printf("Enter the department of an employee : ");
  gets(e.depart);
  printf("Name of an employee is %s\nid of the employee is %d\nsalary of an employee is %ld\ndepartment of the employee is %s",e.name,e.id,e.salary,e.depart);
}

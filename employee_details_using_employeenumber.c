//This is the code for performing employee deatils and access their details through employee number


#include<stdio.h>
struct employee
{
 int emp_no;
 char emp_name;
 char emp_section;
 float emp_salary;
}e[10];
int main()
{
 int num,i,s;
 printf("enter the number :\t");
 scanf("%d\n",&num);
 for(i=0;i<num;i++)
 {
  printf("hi");
  printf("Enter the employee number :\t");
  scanf("%d\n",&e[i].emp_no);
  printf("Enter the employee name :\t");
  scanf("%s\n",e[i].emp_name);
  printf("Enter the sector which the employee is currently working :\t");
  scanf("%s\n",e[i].emp_section);
  printf("Enter the employee salary :\t");
  scanf("%d\n",e[i].emp_salary);
 }
 printf("Enter the employee number to search :\t");
 scanf("%d\n",&s);
  for(i=0;i<num;i++)
 {
  if(e[i].emp_no == s)
  {
   printf("Employee name is :\t");
   scanf("%s\n",e[i].emp_name);
   printf("Currently working sector is :\t");
   scanf("%s\n",e[i].emp_section);
   printf("Employee salary is :\t");
   scanf("%d\n",e[i].emp_salary);
  }
 }
}

/******************************************************************************

1. Define a structure Employee with member variables id, name, salary

*******************************************************************************/

#include <stdio.h>
#include<string.h>

int main()
{
struct Employee
   {
       int id;
       char name[20];
       float salary;
   } b1 ;

printf("Enter Employee id\n");
scanf("%d",&b1.id);
fflush(stdin);

printf("Enter Employee name \n");
fgets(b1.name,20,stdin);
b1.name[strlen(b1.name)-1]='\0';

printf("Enter Empoyee salary\n");
scanf("%f",&b1.salary);

printf("You have entered \n");
printf("%d %s %0.1f",b1.id,b1.name,b1.salary);
return 0;
}


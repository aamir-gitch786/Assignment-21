/******************************************************************************

3. Write a function to display employee data. [ Refer structure from question 1 ]

*******************************************************************************/

#include <stdio.h>
#include<string.h>
struct Employee
   {
       int id;
       char name[20];
       float salary;
   } b1 ;

void display(struct Employee b1);
//these all above are structure prototype or declaration.

int main()
{

printf("Enter Employee id\n");
scanf("%d",&b1.id);
fflush(stdin);

printf("Enter Employee name \n");
fgets(b1.name,20,stdin);
b1.name[strlen(b1.name)-1]='\0';

printf("Enter Empoyee salary\n");
scanf("%f",&b1.salary);

display(b1);
return 0;
}

void display(struct Employee b1)
{

    printf("You have entered \n");
printf("%d %s %0.1f",b1.id,b1.name,b1.salary);
}

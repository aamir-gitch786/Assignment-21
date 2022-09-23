/******************************************************************************

2. Write a function to take input employee data from the user. [ Refer structure from
question 1 ]

*******************************************************************************/

#include <stdio.h>
#include<string.h>

struct Employee
   {
       int id;
       char name[20];
       float salary;
   } b1 ;


int main()
{
display(b1);
return 0;
}

void display(struct Employee b1 );
void display(struct Employee b1)
{

    printf("Enter Employee id\n");
   scanf("%d",&b1.id);
   fflush(stdin);
   printf("Enter Employee name\n");
   fgets(b1.name,20,stdin);
   fflush(stdin);
   b1.name[strlen(b1.name)-1]='\0';

   printf("Enter Employee salary\n");
   scanf("%f",&b1.salary);

   printf("You have entered these records\n");
   printf("%d %s %0.1f",b1.id,b1.name,b1.salary);
}

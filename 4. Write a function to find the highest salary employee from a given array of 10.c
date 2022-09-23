/******************************************************************************

4. Write a function to find the highest salary employee from a given array of 10
employees. [ Refer structure from question 1]

*******************************************************************************/

#include <stdio.h>
#include<string.h>
struct Employee
{
    int id[10];
    char a[10][20];
    int salari[10];
}b1;




int main()
{
    for(int i=0;i<10;i++)
    {

        printf("Enter employee id\n");
        scanf("%d",&b1.id[i]);
        fflush(stdin);

        printf("Enter employee name\n");
        fgets(b1.a[i],20,stdin);
        b1.a[i][strlen(b1.a[i])-1]='\0';

        printf("Enter employee salaries\n");
        scanf("%d",&b1.salari[i]);


    }
    int max=0;

    for(int i=0;i<10;i++)
       {
         if(max<b1.salari[i])
         {
          max=b1.salari[i];

         }


       }
   printf("Highest  salary is %d",max);

    return 0;
}


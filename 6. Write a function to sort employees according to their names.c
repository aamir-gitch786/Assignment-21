/******************************************************************************

6. Write a function to sort employees according to their names [refer structure from
question 1]

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
    printf("Employees according to their salaries are :  \n");
    for(int i=0;i<10;i++)
       {
         for(int j=0;j<10-1-i;j++)
         {char tem[10][20];
            if(b1.a[j]>b1.a[j+1])
            {

                strcpy(tem[i],b1.a[j+1]);
                strcpy(b1.a[j+1],b1.a[j]);
                strcpy(b1.a[j],tem[i]);



            }

         }
       }
    for(int i=0;i<10;i++)
  {

      printf("%s \n",b1.a[i]);
  }

    return 0;
}


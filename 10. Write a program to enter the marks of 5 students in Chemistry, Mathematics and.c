/******************************************************************************
10. Write a program to enter the marks of 5 students in Chemistry, Mathematics and
Physics (each out of 100) using a structure named Marks having elements roll no.,
name, chem_marks, maths_marks and phy_marks and then display the percentage
of each student.

*******************************************************************************/

#include <stdio.h>
#include<string.h>
struct Studnets
{
   int roll[5];
   char name[5][20];
   int marks[5][3];

}b1;
int main()
{
  for(int i=0;i<5;i++)
  {   printf("Student Number %d\n",i+1);
      printf("Enter Student name : ");
      fgets(b1.name[i],20,stdin);
      b1.name[i][strlen(b1.name[i])-1]='\0';
      fflush(stdin);
      printf("Enter Roll number : ");
      scanf("%d",&b1.roll[i]);
      fflush(stdin);
      printf("Enter subjects marks \n");
      for(int j=0;j<3;j++)
      {    if(j==0)
           printf("Physics :");
           else if(j==1)
           printf("Chemistry :");
           else
           printf("Math : ");
           scanf("%d",&b1.marks[i][j]);
           fflush(stdin);

      }


  }

  for(int i=0;i<5;i++)
  {   float sum=0;
      printf("Percentage of %s is : ",b1.name[i]);
      for(int j=0;j<3;j++)
    {
     sum+=b1.marks[i][j];
    }
    sum=sum/3.0;
    printf("%0.2f\n",sum);


  }

    return 0;
}




/******************************************************************************

9. Write a program to store information of n students and display them using structure

*******************************************************************************/

#include <stdio.h>
#include<string.h>
struct Studnet
{
   char name[1000][20];
   int roll[1000];
   char Email_id[1000][20];
}b1;
int main()
{
    int n;
printf("Enter number of students \n");
scanf("%d",&n);
 fflush(stdin);
for(int i=0;i<n;i++)
 {
   printf("Student Number : %d\n",i+1);
   printf("Name : ");
   fgets(b1.name[i],20,stdin);

   b1.name[i][strlen(b1.name[i])-1]='\0';
   fflush(stdin);

   printf("Roll Number : ");
   scanf("%d",&b1.roll[i]);
   fflush(stdin);

   printf("Email_id :");
   fgets(b1.Email_id[i],20,stdin);
   b1.Email_id[i][strlen(b1.Email_id[i])-1]='\0';
   fflush(stdin);
 }
 printf("You have enterd :\n");
 for(int i=0;i<n;i++)
 {
    printf("%s %d %s \n",b1.name[i],b1.roll[i],b1.Email_id[i]);

 }
    return 0;
}


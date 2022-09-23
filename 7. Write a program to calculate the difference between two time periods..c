/******************************************************************************

7. Write a program to calculate the difference between two time periods.

*******************************************************************************/

#include <stdio.h>
#include<string.h>
struct Employee
{
    int hours1,minute1,seconde1,hours2,minute2,seconde2;



}b1;
int main()
{ long int Time1,Time2,ans;
  int H,M,S;
   printf("Enter first time periods in (Hourse minute seconde)\n");
   scanf("%d%d%d",&b1.hours1,&b1.minute1,&b1.seconde1);
   printf("Enter Seconde time periods in (Hourse minute seconde)\n");
   scanf("%d%d%d",&b1.hours2,&b1.minute2,&b1.seconde2);

    Time1=(b1.hours1*60*60)+(b1.minute1*60)+(b1.seconde1);
    Time2=(b1.hours2*60*60)+(b1.minute2*60)+(b1.seconde2);
  if(Time1>Time2)
  {
    ans=Time1-Time2;
    H=ans/3600;
    ans=ans%3600;
    M=ans/60;
    ans=ans%60;
    S=ans;
  }
  else
  {
      ans=Time2-Time1;
      H=ans/3600;
      ans=ans%3600;
      M=ans/60;
      ans=ans%60;
      S=ans;
  }
   printf("%d %d %d",H,M,S);
    return 0;
}


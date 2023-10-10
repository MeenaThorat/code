#include<stdio.h>
int DivisibleByFive(int iValue)
{
  int iAns=0;
  iAns= iValue % 5;
if(iAns==0)
{
    return 1;

}
else
   {
    return 0;
     
  }
  

}

int main()
{
 int iNo=0;
 int iRet=0;

 printf("Enter number :");
 scanf("%d",&iNo);

 iRet= DivisibleByFive (iNo);

 if(iRet==0)
   
   {

     printf("number not divsible by 5",iNo);

   }
 else
  {
     printf("number divsible by 5",iNo);


  }

    return 0;
}
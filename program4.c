#include<stdio.h>
int AddtionOFNumbers (int iNo1,int iNo2)
{
    int iAns=0;
  iAns =iNo1 + iNo2 ;
    return iAns;

}

int main()
{
  int iValue1=0 , iValue2=0;


   printf("enter first number : \n");
   scanf("%d",&iValue1);

   printf("enter second number :\n ");
   scanf("%d",& iValue2);

   int iRet=AddtionOFNumbers(iValue1,iValue2);

   printf("addtion is : %d \n",iRet);

   return 0;

}
#include<stdio.h>
#include<stdbool.h>
bool DivisibleByThreeAndFiver(int iNo)
{
    int iAns1 =0,  iAns2=0;
   
    iAns1 = iNo % 3;
    iAns2 =iNo % 5;

   if ((iAns1==0) && (iAns2==0))
   {
    return true;

   }
   else
   {
   return false;

   }

}

int main()
{
  int iValue=0;
  bool bRet=false;

  printf("enter number :\n");
  scanf("%d",& iValue);
  
  bRet=DivisibleByThreeAndFiver(iValue);
  if(bRet ==true)
  {

   printf("%d is divisible by 3 and 5 \n :",iValue);

  }
  else
  {
   printf("%d is not divisible by 3 and 5 \n :",iValue);

  }

 return 0;

}
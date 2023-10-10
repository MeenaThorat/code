#include<stdio.h>
int SumDigits(iNo)
{
     int iSum=0 , iDigit=0;
     if(iNo < 0 )
  {
      iNo = -iNo;

  }
  while (iNo !=0)

  {

      iSum=iSum + (iNo % 10);
      iNo/= 10;

  }
  return  ;
  
}
int main()
{
    int iValue=0;
    int iRet=0;

     printf("enter number : \n");
     scanf("%d",&iValue);

     iRet=SumDigits(iValue);

     printf("number of digits are :%d \n ",iRet);
      return 0;
}
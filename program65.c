#include<stdio.h>
int MaxDigit(int iNo)
{
   int iDigit =0;
   int iMax=0;

      if(iNo < 0)
  {

      iNo = -iNo;
  }
    while (iNo!=0)
  {

    iDigit = iNo % 10;
    if(iDigit > iMax)

  {
     iMax = iDigit;
  }
  if(iMax ==9)
  {
    break;
  }

   iNo = iNo /10;
  }
  

}

int main()

{
    int iValue=0;
     int iRet = 0;

     printf("enter number : \n");
     scanf("%d",&iValue);

     iRet= MaxDigit(iValue);

     printf("Largest digit is : \n",iRet);
     
   
     return 0;
 
}
#include<stdio.h>
void DisplayEvenOddDigits(int iNo)
{

   int iEvenCnt=0 , iOddCnt=0;
   int iDigit =0;

   if(iNo==0)
   {
    printf("Number of even digits are : %d \n",1);
   printf("Number of even digits are : %d \n",0);
   
     return;
   }
   
 
   while (iNo !=0)
   {
 
      iDigit=iNo %10;
      if((iDigit % 2)==0)
      {
        iEvenCnt++;
      }
      else
      {
        iOddCnt++;
      }
      iNo = iNo /10;

    }
   printf("Number of even digits are : %d \n",iEvenCnt);
   printf("Number of even digits are : %d \n",iOddCnt);
   
}
int main()
{
  int iValue=0;
 

  printf("enter number : \n");
  scanf("%d",&iValue);

   
   DisplayEvenOddDigits(iValue);

   
  
    return 0;
}


#include<stdio.h>
bool ChecPerfect(int iNo)

{
  int iCnt =0, iSum =0;

  for (iCnt=1; iCnt<= (iNo/2); iCnt++)
   {
     if(( iNo % iCnt)==0)
       {

         iSum = iSum + iCnt;
       
       }
   }
    
         if ( iSum == iNo)
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
  int iValue =0, iRet=0;

  bool bRet = false;
   
   printf("enter number : \n");
   scanf("%d",iValue);

   iRet= ChecPerfect(iValue);

   if (bRet == true)

   {
    printf("%d is a perfect number \n ",iValue);


   }
   else
   {

    printf("%d is not perfect number \n", iValue);
   }

    return 0;
}
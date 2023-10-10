#include<stdio.h>
#include<stdbool.h>
bool CheckPallindrom(int iNo)
{
int iDigit =0 , iRev=0;
int iTemp= iNo;

while (iNo !=0)
{
  iDigit = iNo % 10;
  iRev =(iRev * 10) + iDigit;
  iNo= iNo / 10;
}
return (iRev == iTemp);

}
int main()

{
      int iValue=0;
      bool bRet=false;

     printf("enter number : \n");
     scanf("%d",&iValue);

   
     bRet=CheckPallindrom(iValue);
     if(bRet == true)
  {
   printf(" %d is a palindrom number\n",iValue);

  }
  else
  {
    printf("%d is not palindrom \n ", iValue);
   }
   
  return 0;
 
}





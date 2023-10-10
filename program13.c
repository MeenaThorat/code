#include<stdio.h>
#include<stdbool.h>
  bool DivisibleByThreeAndFive(int iNo)
 {
  if(iNo % 3==0)
  {
    if(iNo % 5== 0)
    {
          return true;
    }
    else
    {
      return false;
    }
  }
   else
   {
    return false;
   }

 }

int main()
{
  int ivalue =0;
  bool bRet =false;

  printf("Enetr number : \n");
  scanf("%d",ivalue);
  
  bRet = DivisibleByThreeAndFive(ivalue);
  if( bRet==true)
  {

    printf("%d is divisible by 3 and 5 : \n");

 }
 else
 {
        printf("%d is not divisible by 3 and 5 : \n");

 }
  return 0;

}
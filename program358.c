#include<stdio.h>
#include<stdbool.h>

bool CheckPerefect(int No)
 {
    static int iCnt =1;
    static iSum =0;

    if (iCnt  <= (No /2))
     {
        if((No % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
        iCnt++;
        CheckPerefect(No);
     } 
      if(iSum== No)
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
   int Value = 0;
   bool bRet =0;
  

   printf("enter the number \n");
   scanf("%d",&Value);
  
    bRet = CheckPerefect(Value);

    
   
    return 0;

}
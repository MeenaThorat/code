#include<stdio.h>
 
 int SumFactorsR(int No)
 {
    static int iCnt =1;
    static iSum =0;

    if (iCnt  <= (No /2))
     {
        if((No % iCnt) == 0)
        {
            

        }
        iCnt++;
        SumFactorsR(No);
     } 
     return iSum;
 }
 

int main()
{
   int Value = 0;
   int Ret =0;
  

   printf("enter the number \n");
   scanf("%d",&Value);
  
     FactorsR(Value);

    
   
    return 0;

}
#include<stdio.h>
 
 int Factorial(int No)
 {
    static int Sum = 1;
    static   int iCnt = 1;

   if (iCnt <= No)
    {
        Sum = Sum * iCnt;
        iCnt++;
        Factorial(No);
    }
    return Sum;
    
 }
 

int main()
{
   int Value = 0;
   int Ret = 0;

   printf("enter the number \n");
   scanf("%d",&Value);
  
    Ret =Factorial(Value);

    printf("Factorial is : %d \n",Ret);
   
    return 0;

}
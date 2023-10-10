#include<stdio.h>

int Multiplication(int iValue1,int iValue2)
 
 {
   int iAns=0;
   iAns=iValue1 * iValue2;

   return iAns;

 }

int main()
{
 int iNo1=0, iNo2;
 int iMult=0;

 printf("Enter firt number : ");
 scanf("%d",&iNo1);

 printf("Enter second number :");
 scanf("%d",&iNo2);

  iMult= Multiplication(iNo1,iNo2);

  printf("Multiplicationn is \n %d \n :",iMult);


    return 0;

}
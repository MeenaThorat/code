#include<stdio.h>
 
 void DisplayR(int No)
 {
    static int iCnt = 1;
    if (iCnt <= No)
    {
       printf("*\t");
       iCnt++;
       DisplayR(No);   // Recursive Call
    }
 }   

int main()
{
   int Value = 0;
   printf("enter the number \n");
   scanf("%d",&Value);

   DisplayR(Value);

   printf(" \n End Main \n");

    return 0;

}
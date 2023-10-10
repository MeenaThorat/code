#include<stdio.h>
void Display(int iNo)
{
    int iCnt =0;
     if(iNo <0)
     {
        iNo = -iNo;
     }

  for( iCnt=1; iCnt <= iNo ; iCnt++)

  {
    printf ("%d \t",iCnt);  // Dynamic   //Variable data
    printf("* \t");     //Static   //Fixed data
  }
  
}

int main()
{

  int iValue=0;

  printf("enter number \n");
  scanf("%d",&iValue);

  Display(iValue);
    return 0;
}
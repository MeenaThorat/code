#include<stdio.h>
void Display(int iNo) 
{
    int iCnt =0;
    char Ch ='A';

     if(iNo <0)
     {
        iNo = -iNo;
     }

  for( iCnt=1; iCnt <= iNo ; iCnt++, Ch++)

  {
    printf ("%c\t",Ch);
   
   
 }   

 printf("\n"); 
}

int main()
{

  int iValue=0;

  printf("enter number \n");
  scanf("%d",&iValue);

  Display(iValue);
    return 0;
}
#include<stdio.h>
void DisplayFactros(int iNo)
{
 int iCnt =0 ;
 printf("Factors are :\n");
   
     for (iCnt=1; iCnt<=(iNo/2);iCnt++)
      {

         if((iNo % iCnt)==0)
          {
           printf("%d \n",iCnt);
          }
     }
}

int main()
{
int iValue = 0;
  
  printf("Enetr number :\n");
  scanf("%d",& iValue);

   DisplayFactros(iValue);

    return 0;
}
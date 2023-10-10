#include<stdio.h>
#include<stdlib.h>

 
 int CalculateFrequency(int Arr[], int iSize,int iNo)
{
 
   int iCnt=0 , iFrequency =0;
   
   for(iCnt=0 ; iCnt <iSize ; iCnt++)
   {
      if(Arr[iCnt]==iNo)
      {
        iFrequency++
      }
   
   }
   
   return  iFrequency;
}
 
 


int main()
{
   int *ptr= NULL;
   int iLength =0,iValue=0, iRet=0;
  
    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    ptr= (int *)malloc(iLength * sizeof(int))

   printf("enter the elemnet :\n");

    for(i=0 ; i<iLength ; i++)
    {
        scanf("%d", &ptr[i]);
    }
   

    printf("enter the elemnet to findout the frquency  : \n ");
    scanf("%d",&iValue);

    iRet=CalculateFrequenc(ptr, iLength,iValue);

    printf("Frequency of %d is %d \n ",iValue);
    

    free(ptr);


    return 0;
}
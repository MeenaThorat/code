#include<stdio.h>
#include<stdlib.h>

 
 int DisplyCountEvenOdd(int Arr[], int iSize)
{
 
   int iCnt=0 , iEvenCnt =0;
   
   for(iCnt=0 ; iCnt <iSize ; iCnt++)
   {
      if((Arr [iCnt]%2)==0)
    {
       iEvenCnt++;
    
    }
    else
   {
      iEvenCnt++;
   }
   
   
   }
   
   
    printf("Number of even element are : %d \n",iEvenCnt);
    printf("Number of odd element are : %d \n", iEvenCnt);
}



int main()
{
   int *ptr= NULL;
   int iLength =0,i=0, iRet=0;
  
    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    ptr= (int *)malloc(iLength * sizeof(int));


    printf("enter the elemnet :\n");

    for(i=0 ; i<iLength ; i++)
    {
        scanf("%d", &ptr[i]);
    }
   

   iRet= DisplyCountEvenOdd(ptr , iLength);
   printf("enter  number of elemnet are :%d \n ", iRet);


    free(ptr);


    return 0;
}
#include<stdio.h>
#include<stdlib.h>
 // Step 5: Perform the operation on arry
 //_____ _________(int Arr[], int iSize)
 int CountEven(int Arr[], int iSize)
{
   // Logic
   int iCnt=0 , iEvenCnt =0;
   
   for(iCnt=0 ; iCnt <iSize ; iCnt++)
   {
    if((Arr [iCnt]%2)==0)
    {
      iEvenCnt++;
    }
   }
  return iEvenCnt;
}



int main()
{
   int *ptr= NULL;
   int iLength =0,i=0, iRet=0;
  
   
   // Step 1 : Accept size of arry
    printf("Enter number of elements : \n");
    scanf("%d",&iLength);
    
  // Step 2 : Allocat the element of arry
    ptr= (int *)malloc(iLength * sizeof(int));


// Step 3:
    printf("enter the elemnet :\n");

    for(i=0 ; i<iLength ; i++)
    {
        scanf("%d", &ptr[i]);
    }
   // ________ = _________ (ptr, iLength)


  // Step 4 : Call 

   iRet= CountEven(ptr , iLength);
   printf("enter  number of elemnet are :%d \n ", iRet);

   // Step 6 : Deallocate the memory
    free(ptr);


    return 0;
}
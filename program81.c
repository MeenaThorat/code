#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
   int  CheackOccurance (int Arr[],int iSize ,int iNo)
   {

    int iCnt=0;

    for (iCnt =0; iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            break;
        }
    }
    if(iCnt == iSize)
    {
        return -1;
    }
    else
    {
        return iCnt;
    }
   }
int main()
{
    int *ptr =NULL;
    int iLength=0, i=0, iValue=0, iRet=0;

    //Step 1 : Accept size of array 

    printf("enter number of elemnt : \n");
    scanf("%d",&iLength);

    //Step 2 : Allocate memory fir array 

    ptr =(int *)malloc(iLength * sizeof(int));

    //Step 3: Accept the element of array 

    printf("enter the elemnet :\n");

    for(i=0 ; i< iLength ; i++)
    {
        scanf("%d",&ptr[i]);
    }
    printf("Enter the element to findout the index of first occurance :\n");
    scanf("%d",&iValue);

    //Step 4 : Call the Function 

    iRet = CheackOccurance(ptr , iLength, iValue);
    if(iRet== -1)
    {
        printf("there is no %d in the array \n",iValue);
    }
    else
    {
        printf("%d is occured in the array at index %d \n",iValue,iRet);
    }

    //Step 6 : Dellocate the memory

    free (ptr);

    return 0;
}
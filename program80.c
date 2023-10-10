#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool CheckOccurance(int Arr[], int iSize, int iNo)
{
    int iCnt=0;

    for(iCnt =0; iCnt< iSize; iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            break;
        }
    }
    if(iCnt == iSize)
    {
        return false;
    }
    else
    {
        return true;

    }
}

int main()
{
  int *ptr =NULL;
  int iLength =0, i=0, iValue=0;
  bool bRet=0;

  // Step 1 : Accpet size of array 

  printf("enter numbre  of element : \n");
  scanf("%d", & iLength);

  //Step 2 : Allocate memory for array 

  ptr= (int *)malloc(iLength * sizeof(int));

  //Step 3 : Accept the element of arry 

  printf("Enter the element :\n");

  for(i=0; i< iLength; i++)
  {
    scanf("%d",&ptr[i]);

  }
  printf("enter the elemnet to findout the occurance : \n");
  scanf("%d",&iValue);

  //Step 4 : Call the function

   bRet=CheckOccurance(ptr , iLength,iValue);
   if(bRet== true)
   {
    printf("%d is occured in the arry \n",iValue);
   }
   else
   {

    printf("There is no %d in the array \n ",iValue);
   }

   return 0;

}
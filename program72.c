#include<stdio.h>
#include<stdlib.h>
// float Average (int *Arr , int iSize)

 float Average(int Arr[], int iSize)
{

   int iSum=0, iCnt =0;

    for (iCnt =0 ; iCnt < iSize ; iCnt++)
  {
     iSum = iSum + Arr[iCnt];
  }

  return (iSum / iSize);

}



int main()
{
    int *ptr = NULL;
    int iLength = 0 ,i=0;
    float fRet = 0.0f;

    printf("Enter number of elements  : \n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the number : \n");
    //      1         2         3
    for(i = 0; i < iLength; i++)
    {
        scanf("%d",&ptr[i]); // 4
    }

   fRet = Average(ptr , iLength);
   printf("Average :%f \n ", fRet);

   free(ptr);

    return 0;
}
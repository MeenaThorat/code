#include<stdio.h>
#include<stdlib.h>

void DisplayReverse(int Arr[], int iSize)   //5
{
  int iCnt =0 ;
  for (iCnt= iSize-1;iCnt >=0 ;iCnt--)
  {
    printf("%d \n", Arr[iCnt]);
  }
   
}
int main()
{
    int *ptr =NULL;
    int iLength=0, i=0;

    printf("ENTER NUMBER OF ELEMENT : \n"); //1
    scanf("%d",&iLength);

    ptr= (int*)malloc(sizeof(int)*iLength);//2

    printf("enter the elemnet : \n");//3
    for(i=0; i<iLength; i++)

    {
        scanf("%d",&ptr[i]);
    }
    printf("element in the reverse order :\n");
    DisplayReverse(ptr, iLength);//4

   free(ptr);  //6

    return 0;
}
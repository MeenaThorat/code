#include<stdio.h>

int AdditionR(int Arr[], int iSize)
{
    static int iCnt = 0;
    static int iSum =0;

   if(iCnt < iSize)
    {
        iSum = iSum + Arr[iCnt];
        iCnt++;
        AdditionR(Arr,iSize);
    }

    return iSum;
}
int main()
{
    int Brr[5] = {10, 20, 30, 40 , 50};
    int Ret =0;

    Ret = AdditionR(Brr, 5);

    printf("Addtion is : %d \n",Ret);
    return 0;
}
#include<stdio.h>
#include<stdbool.h>

// 4th bit
typedef unsigned int UINT;

//
// 0000 0000 0000  0000 0000 0000 0000 0000 

// 1111 1111  1111 1111 1111  1111 1111 0111

// 0XFFFFFFF7


UINT OffBit (UINT No)
{
    UINT iMask =  0XFFFFFFF7;
    UINT iAns = 0;

    iAns = No & iMask;
    return iAns;  


}

int main()
{
    UINT Value = 0;
    bool iRet = 0;

    printf ("Enter number : \n");
    scanf("%d",&Value);
    iRet = OffBit(Value);
  
   if(iRet == true)
   {
    printf("4th bit is on \n");
   }
   else
   {
    printf("4th bit is off \n");
   }
    return 0;
}
#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleRange(UINT NO, Start, UINT End)
{
   UINT Mask1 = 0, Mask2 =0, Mask = 0 , Result = 0;
   
}
int main()
{
  UINT Value = 0;
  UINT i =0, j=0;
  UINT Ret =0;


  printf("Please enter number : \n");
  scanf("%d",&Value);

  printf("Enter starting bit position \n");
  scanf("%d",&j);

   Ret = ToggleRange(Value , i, j);
   printf("Updated number is : %d \n",Ret);
 
  return 0;

}


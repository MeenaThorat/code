// 4
// 4  +  3  +  2  + 1 = 10

#include<stdio.h>
 
 int AdditionI(int No)
 {
    int Sum = 0;
    int iCnt = 1;

    while (iCnt <= No)
    {
        Sum = Sum + iCnt;
        iCnt++;
    }
    return Sum;
    
 }
 

int main()
{
   int Value = 0;
   int Ret = 0;

   printf("enter the number \n");
   scanf("%d",&Value);
  
    Ret = AdditionI(Value);

    printf("Addtion is : %d \n",Ret);
   
    return 0;

}
#include<stdio.h>
int CountCapital(char * str)

{
    int iCnt =0;

    while (* str != '\0')
    {
        if((*str >='A') && (*str <= 'Z'))
        
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
    

}
int main()
{
 char Arr[10];
 int iRet=0;

 printf("Pleas enter string :\n");
 scanf("%[^\n]s", Arr);

 iRet = CountCapital(Arr);

 printf("Frequencty of capital lettter : %d \n", iRet);
    return 0;
}
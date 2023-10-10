#include<stdio.h>
int CountCh(char * str)

{
    int iCnt =0;

    while (* str != '\0')
    {
        if((*str =='a')  || (*str == 'A'))
        
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

 iRet = CountCh(Arr);

 printf("Frequencty of a is : %d \n", iRet);
    return 0;
}
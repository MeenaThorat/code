#include<stdio.h>
char ToLowerX(char ch)
{
    if((ch >= 'A')&& (ch <= 'Z'))// filter
    {
        return ch +32;
    }
    else
    {
        return ch;
    }
}
int main()
{
 char cValue='\0';
 char cRet= '\0';

 printf("Enter the charcter \n");
 scanf("%c", &cValue);


cRet = ToLowerX(cValue);

printf("Charcterr in the lower case is : %c \n", cRet);
    return 0;
}
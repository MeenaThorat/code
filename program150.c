#include<stdio.h>
char CharToggleX(char ch)
{
    if((ch >= 'A')&& (ch <= 'Z'))// filter
    {
        return ch +32;
    }
    else if((ch >= 'a')&&(ch <= 'z'))
    {
        return ch -32;
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


cRet = CharToggleX(cValue);

printf("Charcterr in the lower case is : %c \n", cRet);
    return 0;
}
#include<stdio.h>

void Display(char *str)
{
    if(*str != '\1')
    {
        Display(++str);
        printf("%s \n",str);
        
       
    }
}
int main()
{
    char Arr[20];

    printf("Enter string : \n");
    scanf("%[^\n']s",Arr);

    Display(Arr);

    return 0;
}
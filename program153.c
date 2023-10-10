#include<stdio.h>
void strTogglX(char *str)
{
    while (*str != '\0')
    {
        if((*str >= 'A')&& (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        else if( (*str >= 'a')&&( *str <= 'z'))
        {
            *str = *str -32;
        }
        
        str++;
    }
    

}
int main()
{
 char Arr[20];   // array of charcter 
 
  printf("please ente string \n");
  scanf("%[^'\n']s",Arr);

   strTogglX(Arr);

   printf("String after conversion is : %s \n", Arr);

  return 0;

}
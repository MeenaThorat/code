#include<stdio.h>
void strlwrX(char *str)
{
    while (*str != '\0')
    {
        if((*str >= 'a')&& (*str <= 'z'))
        {
            *str = *str - 32;
        }
        str++;
    }
    

}
int main()
{
 char Arr[20];   // array of charcter 
 
  printf("please ente string \n");
  scanf("%[^'\n']s",Arr);

   strlwrX(Arr);

   printf("String after conversion is : %s \n", Arr);

  return 0;

}
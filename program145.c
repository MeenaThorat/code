#include<stdio.h>
#include<stdbool.h>
bool Check(char * str, char ch)

{
   
    bool bFlag = false;

    while (* str != '\0')
    {
        if(*str == ch)
        
        {
            bFlag = true;
            break;
        }
        str++;
    }
    return bFlag;
    

}
int main()
{
 char Arr[20];
 char cValue='\0';
 bool bRet=false;

 printf("Pleas enter string :\n");
 scanf("%[^\n]s", Arr);

  printf("Pleas enter the charcter \n");
  scanf(" %c", &cValue);

 bRet=Check(Arr, cValue);

 if(bRet==true)
 {
  printf("Charcter is present int the string \n");
 }
  else
  {
    
  printf("Charcter not is present int the string \n");
  }
 
    return 0;
}
#include<stdio.h>
#include<stdbool.h>
bool IsDigit(char ch)
{
    if((ch >=48)&& (ch<=57))
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
  char cValue='\0';
  bool bRet=false;

  printf("Pleas enter one charcter \n");
  scanf("%c",&cValue);

  bRet = IsDigit(cValue);

  if(bRet== true)
  {
    printf("%c is a digit case latter \n", cValue);
  }
  else
  {
    printf("%c is not a digit case later \n", cValue);
  }


  return 0;

}
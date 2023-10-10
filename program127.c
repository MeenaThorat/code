#include<stdio.h>
#include<stdbool.h>
bool CheckSmall(char ch)
{
    if((ch >=97)&& (ch<=122))
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

  bRet = CheckSmall(cValue);

  if(bRet== true)
  {
    printf("%c is a smalll case latter \n", cValue);
  }
  else
  {
    printf("%c is not a small case later \n", cValue);
  }


  return 0;

}
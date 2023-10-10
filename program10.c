//step 1 undersatnd the problem statement
// step 2  Write the alogrithm
// step 3 Decide the programming laguage
// step 4 Test the program

//.......................................................................................................

//Pogram statement : Accept number from user and check wheter it is divisible bt 5 or not  

//.......................................................................................................

//input : 23
//output : 25 is not divisible by 5

// input : 25
//output : 25 is divisible by 5

//input : -20
//output : 20 is divisible by 5

//.......................................................................................................

/* start 
  Accept number from user as No
  Divide that number by 5 and check the value of reminder
  If the value is 0
  Then display as No is divisible by 5 otherwise display as no is not divisible by 5 
  End
*/

//.........................................................................................................

#include<stdio.h>
#include<stdbool.h>

//............................................................................................................

//Function name : DivisibleByFive
//Description : To check whether input is divisible by 5 or not
//Input : Integer 
//Output ; integer
//Auther : Meeena Thorat
//Date : 12/ 10/2022

//.............................................................................................................
int DivisibleByFive(int iNo)
{
    int iAns=0;
    iAns =iNo % 5;
    if(iAns == 0)
    {
    return false;
    }
    else
    {
    return true;

    }
 }

int main()
{

   int iValue=0;
    bool bRet=0; 

   printf("enter number :\n");
   scanf("%d",& iValue);

   bRet = DivisibleByFive(iValue);
   if(bRet ==false)
   {
    printf(" %d is divisible by 5 \n",iValue);

   }
   else
   {
       printf(" %d is not divisible by 5 \n",iValue);
    
   }
   return 0;
}

//..........................................................................

// Result
// Input : 25
//Output : 25 is divisble by 5

//..............................................................................















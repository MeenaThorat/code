//...............................................................................................................

//step 1 undersatnd the problem statement
//step 2 write the alogrithem
//step 3 Decide the programing language
//step 4 Test the program

//................................................................................................................

// problem statement : Accept the number from usre and cheak weather ith is divible by five and three or not.

//input : 15
//output : 15 is divisible by 3 and 5

//input : 22
//output : 22 is not divisible by 3 and5

//input : 30
//output : 30 is divisible by 3 and five

//....................................................................................................................

// Alogrithem

//...........................................................................................................................

/* Star 
 Accep number from user as No 
 Divide that No by 3 and 5 or check the value of reminder
 If the value is 0
 Then display as no is divisible by 3 and 5
 otherwise
 display as No is not divisible by 3 and 5
 End
*/

//..................................................................................................................................

#include<stdio.h>
#include<stdbool.h>

//.................................................................................................................................

//Function name : DivisibleByThreeAndFive
// Discription : to check whether input is divisible by 3 and 5 or not
//Input : Integer
//Output : Integer
// Auther name : Meena Thorat
//Date : 12/10/2022

//.....................................................................................................................................
int DivisibleByThreeAndFiver(int iNo)

{

   if((iNo % 3 ==0)&& (iNo %5 ==0))   

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
   int iValue=0;
   bool bRet= false;

   printf("enter number :\n ");
   scanf("%d", & iValue);
    
   bRet= DivisibleByThreeAndFiver(iValue);
   if(bRet == true)

   {  
     printf("%d is divisible by 3 and 5 \n :",iValue);

   } 
   else
   {
    printf("%d is not divisible by 3 and 5 \n",iValue);

   }


   
    return 0;


}
//...........................................................................................................................

// Result
//Input : 15
// Output : 15 is divisble by 3 and 5

//...............................................................................................................................













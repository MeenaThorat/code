#include<iostream>
using namespace std;

// Problem on Numbers

class Numbers
 {
     public:
       int iNo;

       Numbers (int i)
       {
          iNo = i;
         
       }
      void Function()            // Here you wanto place the function with business logic
       {
           // logic
       }
  };
int main()
{
        int iValue = 0;
               
         cout<<"Enter number : \n";
         cin>> iValue;
            
         Numbers obj(iValue);

         return 0;

}

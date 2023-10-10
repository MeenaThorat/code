#include<iostream>
using namespace std;

class Arithematic
{
     public:                     // Access sepecifier
         int iValue1;               // chracterstic
         int iValue2;

         Arithematic ()               // Defalut constracter
          {
                 iValue1=0;
                 iValue2 =0;
             
          }
         Arithematic(int A, int B)         //paramiterise constructer 
          {
              iValue1 = A;
              iValue2 = B;

          }

          int Addition()
          {

              int iAdd =0;
              iAdd = iValue1 + iValue2;
              return iAdd;

          }


};         
int main()
{
     int iRet = 0;

    Arithematic obj1;
    Arithematic obj2(10,11);
    Arithematic obj3(20,21);
 
     
    iRet = obj1.Addition();
    cout<<"Addtion is :"<<iRet<<"\n";

    iRet = obj2.Addition();
    cout<<"Addtion is :"<<iRet<<"\n";

    iRet = obj3.Addition();
    cout<<"Addtion is :"<<iRet<<"\n";

   
    return 0;
}
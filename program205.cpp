#include<iostream>
using namespace std;

class 

{
   public:
     int iNo;
       
       DigitX()    //paramitrized
       {
           iNo =0;

       }
       DigitX(int i)
       {
            iNo =i;
       }

};
int main()
{

    int iValue = 0;

    cout<<"Enter number :"<< "\n";
    cin>>iValue;

    DigitX obj(iValue);

    cout<<obj.iNo<<"\n";
    
    return 0;
}

#include<iostream>

using namespace std;

template<class T>

 T Maximum(T Arr[], int iSize)
{

    int iCnt =0;
    T Max= Arr[0];
    for(iCnt=0; iCnt < iSize; iCnt++)
    { if(Arr[iCnt]>Max)
       {
             Max = Arr[iCnt];
       }
    }  
    return Max;
}


int main()
{
    int Data[]= {110, 120 ,330, 40};
    int iRet = Display(Data , 4);

    cout<<"Addtion of integers :"<<iRet <<"\n";
    float Dataf[]=Maximum { 90.2f,9.23f,89.90f, 67.90f, 23.78f};
    float fRet = (Dataf, 5);

    cout<<"Maximum of floats : "<<fRet <<"\n";

 

    return 0;
}
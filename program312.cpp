#include<iostream>

using namespace std;

template<class T>

 T Addtion(T Arr[], int iSize)
{

    int iCnt =0;
    T Sum;
    for(iCnt=0; iCnt < iSize; iCnt++)
    {
             Sum = Sum + Arr[iCnt];
    }
    return Sum;
}


int main()
{
    int Data[]= {10, 20 ,30, 40};
    int iRet = Display(Data , 4);

    cout<<"Addtion of integers :"<<iRet <<"\n";
    float Dataf[]= { 90.2f,9.23f,89.90f, 67.90f, 23.78f};
    float fRet = Addtion(Dataf, 5);

    cout<<"Addtion of float : "<<fRet <<"\n";

 

    return 0;
}
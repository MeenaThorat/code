#include<iostream>

using namespace std;

template<class T>
double Addtion (double i, double j)
{
         T ans;
  
    ans = i + j;

  return ans;
}
int main()
{
    double a= 11.9, b = 10.1, ret =0.0;

    ret = Addtion(a,b);

    cout<<"Addtion is :"<<ret<<"\n";
    int x = 11, t = 10, iret =0;
    iret = Addtion(x,y);
    cout<<"Addtion is : "<< iret <"\n";
    
    return 0;
    
        }


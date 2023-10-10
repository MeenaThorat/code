#include<iostream>
using namespace std;

double Addition(int i, int j, double)
{
    int ans =0;
    ans = i + j;

    return ans;
}

int main()
{
    int a =11.9, b= 10.1, ret =0.0;

    ret = Addition(a,b);

    cout<<"Addition is : "<<ret<<"\n";
    
    return 0;

}
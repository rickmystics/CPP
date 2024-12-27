#include<iostream>
using namespace std;
int decbin(int a)
{
    int m,sum=0,pow=1;
    while(a!=0)
    {
        m=a%2;
        a=a/2;
        sum= sum+m*pow;
        pow=pow*10;
    }
    return sum;
}
int main()
{
    int a,c;
    cout<<"Enter a number "<<endl;
    cin>>a;
    c=decbin(a);
    cout<<"The number in binary form is "<<c<<endl;
}
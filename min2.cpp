#include<iostream>
using namespace std;
int min(int a , int b)
{
    if(a>b)
        return b;
    else
        return a;
}
int main()
{
    int a , b, c;
    cout <<"Enter two numbers"<<endl;
    cin>>a;
    cin>>b;
    c=min(a,b);
    cout<<"The minimum of two numbers is "<<c<<endl;
}
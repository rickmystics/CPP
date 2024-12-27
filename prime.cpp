//prime numbers from   1 to n
//using double function

#include<iostream>
using namespace std;
int prime(int a)
{
    int s=0,b=a;
    for(int i=2;i<a;i++)
        if(a%i==0)
            s++;
    if(s==0)
        return b;
    else 
        return 0;
}
void num(int a)
{
    int i,c;
    cout<<"The prime numbers are :"<<endl;
    for(i=2;i<a;i++)
    {
        c=prime(i);
        if(c!=0)
            cout<<c<<endl;
    }
}
int main()
{
    int a,b;
    cout<<"Enter the limit:"<<endl;
    cin>>a;
    num(a);
    return 0;
}
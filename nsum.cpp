#include<iostream>
using namespace std;
int min(int a )
{
    int sum=0;
    for(int i=0;i<a;i++)
        sum=sum+i;
    return sum;
}
int main()
{
    int a , b, c;
    cout <<"Enter the  limit"<<endl;
    cin>>a;
    
    c=min(a);
    cout<<"The sum of n numbers is "<<c<<endl;
}
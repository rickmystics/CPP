#include<iostream>
using namespace std;
int fact(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
        fact*=i;
    return fact;
}
int ncr(int a, int b)
{
    int c,s1=1,s2=1,s3=1,sum;
    c=a-b;
    s1=fact(a);
    s2=fact(b);
    s3=fact(c);
    sum=s1/(s2*s3);
    return sum;
}
int main()
{
    int n,r,c;
    cout<<"Enter the n and r of ncr :"<<endl;
    cin>>n;
    cin>>r;
    c=ncr(n,r);
    cout<<"The ncr of "<<n<<" and "<<r<<" is "<<c<<endl;
}
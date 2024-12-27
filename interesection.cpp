#include<iostream>
using namespace std;
void is(int a[],int b[], int c[],int s)
{
    int i,j,sum=0;
    cout<<"The intersection of the array :"<<endl;
    for(i=0;i<s;i++)
        for(j=s-1;j>=0;j--)
        {
            if(a[i]==b[j])
            {
                cout<<a[i]<<endl;
            }
        }
}
int main()
{
    int i,c,s;
    cout<<"Enter the size of the array:"<<endl;
    cin>>c;
    int a[c];
    int b[c];
    int x[c];
    cout<<"enter the first array "<<endl;
    for(i=0;i<c;i++)
        cin>>a[i];
    cout<<"Enter the second array"<<endl;
    for(i=0;i<c;i++)
        cin>>b[i];
    is(a,b,x,c);
}
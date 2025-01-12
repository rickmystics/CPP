#include<iostream>
using namespace std;
int main()
{
    int i,j,st,n=5;
    int arr[5]={1,2,3,4,5};
    cout<<"Enter the elements"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
            for(st=i;st<=j;st++)
            {
                cout<<arr[st]<<endl;
            }
        
    }
}
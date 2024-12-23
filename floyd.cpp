#include<iostream>
using namespace std;
int main()
{
    int r,c,i,j,flag=1;
    
    for(i=1;i<5;i++)
    {
        for(j=1;j<=i;j++){
            cout<<flag;
            flag++;
        }
        cout<<""<<endl;
    }
    return 0;
}

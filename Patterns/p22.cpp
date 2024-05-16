/*
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********
*/
#include<iostream>
using namespace std;
int main()
{
    int n=5;
    for(int i=n;i>0;i--)
    {
        for(int j=0;j<i;j++)
        {
            cout<<"*";
        }
        for(int s=0;s<2*n-2*i;s++){
            cout<<" ";
        }
         for(int j=0;j<i;j++)
        {
            cout<<"*";
        } cout<<endl;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<"*";
        }
        for(int s=0;s<2*n-2*i;s++){
            cout<<" ";
        }
        for(int j=0;j<i;j++)
        {
            cout<<"*";
        }cout<<endl;

    }
    return 0;
}
/*

*          *
**        **
***      ***
****    ****
*****  *****
************
*****  *****
****    ****
***      ***
**        **
*          *

*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of rows : ";
    cin>>n;

     /*
     0
     2
     4
     6
     8
     10
     */
    //top
    for(int i=n;i>0;i--)
    {
        //left
        for(int j=0;j<=n-i;j++)
        {
            cout<<"*";
        }
        for(int k=0;k<2*i-2;k++)
        cout<<" ";
        for(int l=0;l<=n-i;l++)
        {
            cout<<"*";
        }
        
        cout<<endl;
    }

    //bottom
    for(int i=1;i<n;i++)
    {
        //left
        for(int j=0;j<n-i;j++)
        {
            cout<<"*";
        }
        for(int k=0;k<2*i;k++)
        cout<<" ";
        for(int j=0;j<n-i;j++)
        {
            cout<<"*";
        }

        
        cout<<endl;
    }
}
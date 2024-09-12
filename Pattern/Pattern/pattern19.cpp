/*
************
*****  *****
****    ****
***      ***
**        **
*          *
*          *
**        **
***      ***
****    ****
*****  *****
************

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
    for(int i=1;i<=n;i++)
    {
        //left
        for(int j=0;j<=n-i;j++)
        {
            cout<<"*";
        }
        //space
        for(int s=0;s<2*i-2;s++)
        {
            cout<<" ";
        } 
        
        //right
        for(int r=0;r<=n-i;r++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    //bottom
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }

        //space
        for(int s=0;s<2*(n-i)-2;s++)
        {
            cout<<" ";
        }

        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        } 


        cout<<endl;
    }
}
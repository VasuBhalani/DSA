/*
n = 6

     ******
    *****
   ****
  ***
 **
*
 **
  ***
   ****
    *****
     ******
*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of rows : ";
    cin>>n;

    for(int i=0; i<n; i++)
    {
        //space 
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        for(int k=0; k<n-i; k++)
        cout<<"*";

        cout<<endl;
    }
    for(int i=1;i<n;i++)
    {
        //space
         for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        for(int k=0; k<=i; k++)
        cout<<"*";

        cout<<endl;
    }
}
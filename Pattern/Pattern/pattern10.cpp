/*

*
**
***
****
*****
****
***
**
*

*/

#include<iostream>
using namespace std;

int main()

{
    int n;
    cout<<"Enter the numbers of row : ";
    cin>>n;

    // Top
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    //Bottom
    for(int i=n-1;i>0;i--)
    {
        for(int j=0;j<i;j++)
        {
           cout<<"*";
        }
        cout<<endl;
    }

}
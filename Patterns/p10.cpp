/*
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

    int n=5;
    for(int i=n;i>0;i--)
    {
        for(int j=0;j<n-i;j++)
        {
            cout<<" ";
        }
        for(int k=0;k<i;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
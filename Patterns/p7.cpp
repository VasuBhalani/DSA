/*
    *                    s=4  1
   ***                   s=3  3
  *****                  s=2  5
 *******                 s=1  7 
*********                s=0  9
*/

#include<iostream>
using namespace std;
int main()
{

    int n=5;
    for(int i=1;i<=n;i++) //number of row
    {
        for(int j=0;j<n-i;j++)
        {
            cout<<" ";
        }
        for(int k=0;k<2*i-1;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
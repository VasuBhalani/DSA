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
    for(int i=n;i>0;i--) //number of row
    {
        for(int j=0;j<i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
/*
1                i=0 j=0 i+j %2 =0          if condition is true then 1
0 1              i=1 j=0 i+j %2 =1                else 0
1 0 1
0 1 0 1
1 0 1 0 1
*/

#include<iostream>
using namespace std;
int main()
{

    int n=5;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            int a=(i+j) % 2 == 0 ? 1 : 0;
            cout<<a<<" ";
        }
        cout<<endl;
    }
    return 0;
}
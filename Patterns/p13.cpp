/*             s
1      1       6
12    21       4
123  321       2
12344321       0
*/

#include<iostream>
using namespace std;
int main()
{

    int n=9;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<j+1;
        }
        for(int k=0;k<2*n-2*i;k++)
        {
            cout<<" ";
        }
         for(int j=i;j>0;j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
    
    return 0;
}
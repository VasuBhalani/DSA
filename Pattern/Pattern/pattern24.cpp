/*

00000000010
000000009
00000008
0000007
000006
00005
0004
003
02
1

*/
#include<iostream>
using namespace std;
int main()
{
    
    int n;
    cout<<"Enter the number of rows : ";
    cin>>n;
    for(int i=n;i>0;i--)
    {
        //cout zeros
        for(int j=0;j<i-1;j++)
        {
            cout<<0;
        }
        cout<<i<<endl;
    }
    return 0;
}
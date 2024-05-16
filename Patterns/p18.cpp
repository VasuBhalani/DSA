/*
E
D E
C D E
B C D E
A B C D E
*/

#include<iostream>
using namespace std;
int main()
{

    int n=5;
    char ch=char('A'+n-1);
    // cout<<ch;

    for(int i=0;i<n;i++)
    {
        for(int j=i;j>=0;j--)
        {
            cout<<char(ch-j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}
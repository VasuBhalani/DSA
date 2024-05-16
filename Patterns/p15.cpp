/*
A
AB
ABC
ABCD
*/

#include<iostream>
using namespace std;
int main()
{

    int n=5;
    char ch='A';
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<char(ch+j);
        }
        cout<<endl;
    }
    return 0;
}
/*
A
BB
CCC
DDDD
EEEEE
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
            cout<<char(ch+i);
        }
        cout<<endl;
    }
    return 0;
}
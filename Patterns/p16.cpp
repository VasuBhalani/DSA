/*
ABCD
ABC
AB
A
*/

#include<iostream>
using namespace std;
int main()
{

    int n=5;
    char ch='A';
    for(int i=n;i>0;i--)
    {
        for(int j=0;j<i;j++)
        {
            cout<<char(ch+j);
        }
        cout<<endl;
    }
    return 0;
}

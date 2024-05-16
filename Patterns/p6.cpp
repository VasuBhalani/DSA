/*
12345
1234
123
12
1
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
            cout<<j+1;
        }
        cout<<endl;
    }
    return 0;
}
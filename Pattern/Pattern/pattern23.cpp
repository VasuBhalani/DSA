/*

1
1 3
1 3 5
1 3 5 7
1 3 5 7 9
2 4 6 8 10
2 4 6 8
2 4 6
2 4
2

*/

#include<iostream>
using namespace std;
int main()
{

    int n;
    cout<<"Enter the number of rows : ";
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<(2*j)-1<<" ";
        }
        cout<<endl;
    }
    for(int i=n; i>0; i--)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<2*j<<" ";
        }
        cout<<endl;
    } 
    return 0;
}
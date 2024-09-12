/*
F
E F
D E F
C D E F
B C D E F
A B C D E F
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the numbers of row : ";
    cin>>n;
    char ch='A';
    ch=char(ch+n-1);
    //  cout<<ch;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<char(ch+j-i);
        }
         
        cout<<endl;
         
    }
    return 0; 
}

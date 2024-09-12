/*
A 
B B
C C C
D D D D
E E E E E
F F F F F F

*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of rows : "; 
    cin>>n;
    int k=0;
    char ch='A';  
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        cout<<char(ch+i)<<" ";

        cout<<endl;
    }


    return 0;
}
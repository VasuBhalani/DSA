/*
A
A B
A B C
A B C D
A B C D E
A B C D E F

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
        cout<<char(ch+j)<<" ";

        cout<<endl;
    }


    return 0;
}
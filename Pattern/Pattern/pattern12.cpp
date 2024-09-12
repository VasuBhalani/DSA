/*

1        1
12      21
123    321
1234  4321
1234554321



*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the numbers of row : ";
    cin>>n;
     
    for(int i=n; i>0; i--) 
    {
        //left side
        for(int j=0;j<=n-i;j++)
        {
           cout<<j+1;
        }
        //space
        for(int k=0;k<2*i-2;k++)
        {
            cout<<" ";
        }
        //right side
        for(int l=0;l<=n-i;l++)
        {
           cout<<n-i-l+1;   
        }cout<<endl; 

    }
    
    return 0;
}
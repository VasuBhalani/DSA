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
  
    for(int i=n-1;i>=0;i--)
    {
        char ch='A'+i;
        for(int k = 0 ; k<n-i; k++)
         cout<< char(ch+k);
        
        cout<<endl;
    }
    return 0; 
}

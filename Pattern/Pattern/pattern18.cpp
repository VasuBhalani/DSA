/*
5    F 
4    E F
3    D E F
2    C D E F
1    B C D E F
0    A B C D E F
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

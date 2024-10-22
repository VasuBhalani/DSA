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
     
     for(int i=1; i<=n; i++)
  {
      
      for(int j=0; j<i ; j++)
      cout<<j+1;
      
      for(int st=0; st<2*n-2*i; st++)
      cout<<" ";
      
      for(int k=i;k>0;k--)
      cout<<k;
      
      cout<<endl;      
  }
    
    return 0;
}

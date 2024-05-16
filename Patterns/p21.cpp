#include<iostream>
using namespace std;

void getNumberPattern(int n) {
    // Write your code here.
      int k=n;
    for(int i=0;i<2*n-1;i++)
        {
            for(int j=0;j<2*n-1;j++)
            {
                
                if(i==0||j==0||i==2*n-2||j==2*n-2)
                {
                    
                    cout<<k;
                }
                else
                {
                    cout<<" ";
                }
            }cout<<endl;
     }
}

int main()
{
    int n;
    cin>>n;
    getNumberPattern(n);
}
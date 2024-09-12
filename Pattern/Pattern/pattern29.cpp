#include <iostream>
using namespace std;

/*
1     
1 1    
1 2 1   
1 3 3 1  
1 4 6 4 1 
*/
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    int arr[n][n];
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j || j==0)
            {
               arr[i][j]=1;
            }else if(j>i)
            {
                arr[i][j]=0;
            }else{
                arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i][j]==0)
            {
               cout<<" ";
            }else{
            cout << arr[i][j] <<" ";
            }
        }cout<<endl;
    }
 
    return 0;
}

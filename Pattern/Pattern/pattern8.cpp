/*

*********
 *******
  *****
   ***
    *

*/


#include<iostream>
using namespace std;

int main()
{ 

    int n;
    cout << "Enter the numbers of row : ";

    cin>>n;

    for(int i=n-1;i>=0;i--)
    {
        //space
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        // * 
        for(int k=0;k<2*i+1;k++)
        {
           cout<<"*";
        }
        cout<<endl;
    }


    return 0;
}
/*
     A     
    ABA    
   ABCBA   
  ABCDCBA  
 ABCDEDCBA 
ABCDEFEDCBA

*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the numbers of row : ";
    cin>>n;
    char ch='A';
     
     /*
     5
     4
     3
     2
     1
     0
     */

    for(int i=0;i<n;i++)
    {
        //space
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        //left 
        for(int l=0;l<i;l++)
        cout<<char(ch+l);

        // strait line
        cout<<char(ch+i);
        
        //right 
        for(int r=0;r<i;r++)
        cout<<char(ch+i-r-1);

        cout<<endl;
         
    }

}

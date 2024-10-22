/*
************
*****  *****
****    ****
***      ***
**        **
*          *
*          *
**        **
***      ***
****    ****
*****  *****
************
  n-i
  [ star , space , star ]
0 |   5      0      5
1 |   4      2      4
2 |   3      4      3
3 |   2      6      2
4 |   1      8      1


   1 8 1
   2 6 2
   3 4 3
   4 2 4
   5 0 5
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of rows : ";
    cin>>n;

       int space = 0;
       for(int i=0;i<n;i++)
       {
         //star 
         for(int j=0;j<n-i;j++)
         cout<<"*"; 

         //space
           for(int l=0;l<space;l++)
            cout<<" ";   

          //star
          for(int k=0;k<n-i;k++)
          cout<<"*"; 
 
          cout<<endl;
       }

     for(int i=1;i<=n;i++)
       {
         //star 
         for(int j=0;j<i;j++)
         cout<<"*"; 

         //space
           for(int l=0;l<2*n-2*i;l++)
            cout<<" ";   

          //star
          for(int k=0;k<i;k++)
          cout<<"*"; 

          cout<<endl;
       }
}

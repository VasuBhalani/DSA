/*   
   A
  ABA
 ABCBA
ABCDCBA
*/

#include<iostream>
using namespace std;
int main()
{

    int n=5;
    char ch='A';
    for(int i=1;i<=n;i++)
    {
        for(int s=0;s<n-i;s++)
        {
            cout<<" ";
        }
         
        for(int k=1;k<i;k++)
        {
              cout<<char(ch+k-1);
        }
        cout<<char(ch+i-1);
        for(int l=i;l>1;l--)
        {
              cout<<char(ch+l-2);
        }
       cout<<endl;
    }
}
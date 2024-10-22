/*
0      A     
1     ABA    
2    ABCBA  4/2 + 1 = 3 sudhi  
3   ABCDCBA 6/2 + 1 = 4 sudi  
4  ABCDEDCBA 
5 ABCDEFEDCBA

*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the numbers of row : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        //space
        for(int j=0;j<n-i-1;j++)
            cout<<" ";
            
        char ch='A'; 
        int breakpoint = (2*i/2)+1; 
        
        for(int k = 1 ; k<=2*i+1; k++){
         cout<<ch;
         if(k<breakpoint) ch++;
         else ch--;
        }     
        
        cout<<endl;
    }

}

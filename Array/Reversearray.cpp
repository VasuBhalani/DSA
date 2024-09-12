#include<iostream>
using namespace std;
void revrese(int arr[],int n,int i){
int s = i;
int e = n-1;
while(s<=e)
  swap(arr[s++],arr[e--]);
}
void display(int arr[],int n)
{
  for(int i=0;i<n;i++)
      cout<<arr[i]<<" ";
 
}
int main()
{
  int n;
  cin>>n;

  int arr[n];
  for(int i=0;i<n;i++)
  cin>>arr[i];

  display(arr,n);
  
  revrese(arr,n,0);

  display(arr,n);
  return 0;
}

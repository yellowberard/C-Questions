#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    
    cout<<"Enter the size of array:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the array:";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        
     }
    for(i=1;i<=n;i++)
    {
        int counter=arr[i],j=i-1;
         while(arr[j]>counter &&j>=0)
         {
             arr[j+1]=arr[j];
             j--;
             
         }
         arr[j+1]=counter;   
    }  
  cout<<"The sorted array is:"<<endl;
  for(i=0;i<n;i++)
  {
      cout<<arr[i]<<endl;

  }
  return(0);
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int max=INT_MIN,min=INT_MAX;
    cout<<"Enter the size if the array:";
    cin>>n;
    int arr[n];
    cout<<"\n Enter the array:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    for(int i=0;i<n;i++)
    {
         if(max<arr[i])
         {
             max=arr[i];
         }  
         
    }
     for(int i=0;i<n;i++)
    {
         if(min>arr[i])
         {
             min=arr[i];
         }  
         
    }
    
    cout<<"\n The Maximum number in the array is:"<<max<<"\n The munimum numbere in the array is:"<<min;
    return(0);
}
#include<bits/stdc++.h>
using namespace std ;
int unique(int arr[],int n)
{
   int num=0;
   for(int i=0;i<n;i++)
   {
     num=num^arr[i];
   }
   return num;
}
int main()
{
    int n;
    cout<<"Enter the size of the Array:";
    cin>>n;
    cout<<"\n Enter the Array:";
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
 cout<<"\n Unique Number is:"<<unique(arr,n);
 return (0);
}
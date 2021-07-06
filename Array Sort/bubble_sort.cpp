#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,arr[n];
    cout<<"Enter length of the array:"<<endl;
    cin>>n;
    cout<<"Enter the array"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    int counter=1;
    while(counter<n)
    {
      for(i=0;i<n-counter;i++)
     {
        if(arr[i]>arr[i+1])
        {
            int temp;
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
        
    }
    counter++;
    }
    cout<<"Sorted array is:";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    return(0);
}
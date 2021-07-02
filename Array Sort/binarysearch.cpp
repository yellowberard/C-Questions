#include<iostream>
#include<stdio.h>
using namespace std;
int binarysearch(int arr[],int size,int search )
{
    int start,end,middle,flag=0;
    start=0;
      end= size;
      middle=(start+ end)/2;
    
    while (start<=end)
    { 
      if(search==arr[middle])
      {
          
          return middle;
          break;
      }
      else if(arr[middle]<search)
      {
          start=middle+1;
      }
      else
      {
          end=middle-1;
      }

    }
    return -1;
}
int main()
{
    int n,key;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    int arrray1[n];
    cout<<"Enter the array";
    for(int i=0;i<=n;i++)
    {
        cin>>arrray1[i];
    }
    cout<<"Enter the number to be searched";
    cin>>key;
    cout<<"your number is present at "<<binarysearch(arrray1,n,key);
    return 0;
}
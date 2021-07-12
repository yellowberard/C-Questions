#include<bits/stdc++.h>
using namespace std;
bool getbit(int n,int pos)
{
    return((n & (1<<pos))!=0);
}
int setbit(int n ,int pos)
{
    return (n | (1<<pos));
}
int unique(int arr[],int n)
{
    int result =0;
    for(int i=0;i<64;i++)
    {
       int sum=0;
       for(int j=0;j<n;j++)
       {
           if(getbit(arr[j],i))
           {
               sum++;
           }
       }   
           if(sum%3!=0)
           {
               result=setbit(result,i);
           }
       
    }
    return result;
}
int main ()
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
 
    cout<<"\n Unique number is:"<<   unique(arr,n);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int setBit(int n,int pos)
{
    return( (n & (1<<pos))!=0);
}
void unique(int arr[], int n)
{
    int fxor=0;
    for(int i=0;i<n;i++)
    {
        fxor=fxor^arr[i];
    }
    int tempxor=fxor;
    int pos=0;
    int setbit=0;
     int newxor=0;
    
    
        while(setbit!=1)
        {
            setbit=fxor & 1;
            pos++;
            fxor=fxor>>1;
        }
       
        for(int i=0;i<n;i++)
        {
            if(setBit(arr[i],pos-1))
           {
             newxor=newxor^arr[i];
           } 
        }
       
        
    
     int u2;
        u2=newxor^tempxor;
        printf("Unique number are: %d,%d",newxor,u2);
    
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
    unique(arr,n);
    return 0;
}
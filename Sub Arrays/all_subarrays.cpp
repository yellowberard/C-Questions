#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i=0;
    cout<<"enter the size:";
    cin>>n;
    int arr[n];
    cout<<"\nEnter the array:";
    for(int l=0;l<n;l++)
    {
        cin>>arr[l];
    }
    while( i<n)
    {
        
            cout<<arr[i]<<endl;
            int j=i+1;
        while(j<n)
        {
            for(int k=i;k<=j;k++)
            {
                cout<<arr[k]<<" ";
            }
            cout<<endl;
            j++;
        }
        cout<<endl<<endl;
        i++;
    }
   return(0); 
}
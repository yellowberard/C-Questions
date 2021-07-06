#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size if the array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the array:";
    for(int i=0;i<=n;i++)
    {
        cin>>arr[i];
    }
    int mx;
    for (int i=0;i<n;i++)
    { 
      mx=max(mx,arr[i]);
      cout<<mx<<endl;

    }
    return(0);
}
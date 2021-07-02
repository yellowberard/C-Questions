#include<bits/stdc++.h>
 using namespace std;

 int main()
 {
      int m,n;
      cout<<"Enter the size of the array:";
      cin>>n>>m;
   cout<<"Enter the 2D array:"<<endl;
   int arr[n][m];
     for(int i=0;i<n;i++)
     {
         for(int j=0;j<m;j++)
         {
             cin>>arr[i][j];
         }
     }
    cout<<"The 2D-array is:"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }  
    return(0);
 }
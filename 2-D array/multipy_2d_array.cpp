#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,n1,n2,n3,sum,m,i,j;
  cout<<"\nEnter the size of the first array";
  cin>>n1>>n2;
  cout<<"\nEnter the number of column of second array :";
  cin>>n3;
 int arr[n1][n2];
 int arr1[n2][n3];
 cout<<"/nEnter the first array:";
for(i=0;i<n1;i++)
   { 
       for(j=0;j<n2;j++)
    {
        cin>>arr[i][j];
                     
    }  
    
   }
   cout<<"\n Enter the second array:";
    for(i=0;i<n2;i++)
   { 
       for(j=0;j<n3;j++)
    {
        cin>>arr1[i][j];
                     
    }  
   
   }  
  
 
  cout<<"\nYour array 1 is\n";
  for(i=0;i<n1;i++)
   { for(j=0;j<n2;j++)
    {
        cout<<arr[i][j]<<" ";
                     
    }  
    cout<<endl;
   }
   cout<<"\nYour Array 2 is:"<<endl;
    for(i=0;i<n2;i++)
   { for(j=0;j<n3;j++)
    {
        cout<<arr1[i][j]<<" ";
                     
    }  
    cout<<endl;
   }  
  
   int arr2[n1][n3];
   
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n3;j++)
        {
            sum=0;
            for(n=0;n<n3;n++)
            {
                sum += arr[i][n]*arr1[n][j];
                           
            }
            arr2[i][j]=sum;
        }
    }
    cout<<"\nYour multipied array is:\n";
 for(i=0;i<n1;i++)
   { for(j=0;j<n3;j++)
    {
        cout<<arr2[i][j]<<" ";
                     
    }  
    cout<<endl;
   }  
   return(0);
}
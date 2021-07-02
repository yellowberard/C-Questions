#include<bits/stdc++.h>
using namespace std;
int main()
{
  int row, col, i,j;
  cout<<"Enter the siz of the Array:";
  cin>>row;
  
  int arr[row][row];
  cout<<"\nEnter the array:";
  for(i=0;i<row;i++)
  {
      for(j=0;j<row;j++)
      {
          cin>>arr[i][j];
      }
  }
  cout<<"\nYour array is\n";
  for(i=0;i<row;i++)
   { for(j=0;j<row;j++)
    {
        cout<<arr[i][j]<<" ";
                     
    }  
    cout<<endl;
}
 int temp;
 cout<<"\nThe Transposed Array is:\n";
 for(i=0;i<row;i++)
 {
     for(j=i;j<row;j++)
     {
        temp=arr[i][j];
        arr[i][j]=arr[j][i];
        arr[j][i]=temp;
     }
 }
for(i=0;i<row;i++)
{
    for(j=0;j<row;j++)
    {
        cout<<arr[i][j]<<" ";
                     
    }  
    cout<<endl;
}
return(0);

}
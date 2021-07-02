#include<bits/stdc++.h>
using namespace std;
int main()
{
  int row, col, i,j;
  cout<<"Enter the siz of the Array:";
  cin>>row>>col;
  
  int arr[row][col];
  cout<<"\nEnter the array:";
  for(i=0;i<row;i++)
  {
      for(j=0;j<col;j++)
      {
          cin>>arr[i][j];
      }
  }
  cout<<"\nYour array is\n";
  for(i=0;i<row;i++)
   { for(j=0;j<col;j++)
    {
        cout<<arr[i][j]<<" ";
                     
    }  
    cout<<endl;
    }
    int search;
    cout<<"\n Enter the number to be searched:";
    cin>>search;
    bool flag=0;
    int r=0,c=col-1;
    while( r<row and c>=0 )
    {
        if(arr[r][c]==search)
        {
            flag=true;
            break;

        }
        else if(arr[r][c]>search)
        {
            c--;
        }
        else
        {
            r++;
        }
    }
   
    if (flag==1)
    {
        cout<<"\n found!!";
    }
    else
    {
        cout<<"\n not found.";
        }

 return(0);   
}
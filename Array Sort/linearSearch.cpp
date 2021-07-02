#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
int searching(int array[],int length,int searched)
{
    for(int k=0;k<length;k++)
    {
        if(searched==array[k])
        {
            return k;
        }
    }
    return -1;
}
int main()
{
    int num, search, n, arr[n],flag=0;
    cout << "Lenght of the array";
    cin >> n;
    cout << "Enter the array";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the number to be searched";
    cin >> search;
    // for (int j = 0; j < n; j++)
    // {
    //     if (search == arr[j])
    //     {
    //         cout << "\n The Entered number is present in the array at " << j;
    //         flag==1;
    //     }
    // }
    // if(flag==0)
    // {
    //     cout << "\n sorry";
    // }
     cout<<searching(arr,n,search);
   return 0;
}
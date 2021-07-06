    #include <bits/stdc++.h>
    using namespace std;
    
    int main()
    {
    int array[5];
    cout<<"Enter the array";

    for(int i=0;i<5;i++)
    {
        cin>>array[i];
    }
    for(int i=0;i<4;i++)
        {
            for (int j = i+1; j< 5; j++)
            {
                if( array[i]>array[j])
                
                {
                    int temp;
                    temp=array[j];
                    array[j]=array[i];
                    array[i]=temp;
                }
            }
            
        }
        for(int i=0;i<5;i++)
        {cout<<array[i]<<" ";}

    return(0);
    }
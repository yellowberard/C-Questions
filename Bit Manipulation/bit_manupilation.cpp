#include<bits/stdc++.h>
using namespace std;
 int getbit(int bit,int pos)
 {
     return((bit & (1<<pos))!=0);
 }

int setbit(int bit,int pos)
{
    return(bit | (1<<pos));
}
 
int clearbit(int bit,int pos)
{
    int mask= ~(1<<pos);
   
    return(bit & mask);
} 

int updatebit( int bit, int pos,int value)
{
   int mask;
   mask= ~(1<<pos);
   bit =bit & mask;
   return(bit| (value<<pos));
}
int main()
{
   cout<<endl<<getbit(5,2);
   cout<<endl<<setbit(5,1);
   cout<<endl<<clearbit(5,1);
   cout<<endl<<updatebit(5,2,1);
   return(0);
   
}
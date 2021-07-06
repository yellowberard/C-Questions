#include<bits/stdc++.h>
using namespace std;
int upper(string str)
{
    for(int i=0;i<str.size();i++)
    {
        str[i] -=32;

    }
    cout<<str<<endl;
    transform(str.begin(),str.end(),str.begin(),::toupper); //transform(begining point of string,ending point of string,point from where operation should start,::toupper | ::tolower);
    cout<<str<<endl;
}

int lower(string str)
{
    
    for(int i=0;i<str.size();i++)
    {
        if(str[i]>='A' && str[i]<='Z')
       { str[i] +=32;}
       else
       {
           str[i] -=32;
       }

    }
    cout<<str<<endl;
    transform(str.begin(),str.end(),str.begin(),::tolower);
    cout<<str<<endl;
}
int main()
{
    string s1="avdgwjcvdgvjwdqhwgdvqye";
    string s2="ADWNDWDNIWDNWKNWkndkwo";
    upper(s1);
    lower(s2);
    return(0);
}

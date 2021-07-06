#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="mayank";
    int maxf=0;
    char ans='a';
    int count[26];
    int i=0;
    for(i=0;i<26;i++)
    {
       count[i]=0;
    }
    for(i=0;i<s.size();i++)
    {
       count[s[i]-'a']++;
    }
    for(i=0;i<26;i++)
    {
        if(count[i]>maxf)
        {
            maxf=count[i];
            ans= i+'a';
        }
    }
    cout<<endl<<ans<<endl<<maxf;
}
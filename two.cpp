#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1="geksfor";
    int flag=0;
    for(int i=0;i<s1.length();i++)
    {
        auto c1= s1.find(s1[i]);
        if(s1.find(s1[i],c1+1)<s1.length())
        {
            cout<<c1;
            flag=1;
            break;
        }
        
    }
    if(flag==0)
    {
        cout<<"-1";
    }
}

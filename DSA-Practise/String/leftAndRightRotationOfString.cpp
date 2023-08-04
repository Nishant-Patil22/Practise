#include <bits/stdc++.h> 
string leftRotate(string str, int d) {
    string ans;
    int n = str.size();
    d = d % n;

    if(d==n)
       return str;

    for(int i=d;i<n;i++)
    {
        ans+=str[i];
    }
    for(int i=0;i<d;i++)
    {
        ans+=str[i];
    }
    return ans;
}

string rightRotate(string str, int d) {
    string ans;
    int n = str.size();
    d = d%n;

    if(d==n)
       return str;

    for(int i=n-d;i<n;i++)
    {
        ans+=str[i];
    }
    for(int i=0;i<n-d;i++)
    {
        ans+=str[i];
    }
    return ans;
}
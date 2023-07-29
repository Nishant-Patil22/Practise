#include <bits/stdc++.h> 
string encode(string &message)
{
    string encoded;
    int count=1;
    char ch = message[0];
    for(int i=1;i<=message.length();i++)
    {
        if(ch == message[i])
        {
            count++;
        }
        else
        {
            encoded+=message[i-1];
            encoded+=to_string(count);
            count=1;
            ch=message[i];
        }

    }
    return encoded;
}